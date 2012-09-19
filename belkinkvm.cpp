#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "hidapi/hidapi/hidapi.h"

// Headers needed for sleeping.
#ifdef _WIN32
	#include <windows.h>
#else
	#include <unistd.h>
#endif

int main(int argc, char* argv[])
{
	int res;
	unsigned char buf[256];
	#define MAX_STR 255
	hid_device *handle;

#ifdef WIN32
	UNREFERENCED_PARAMETER(argc);
	UNREFERENCED_PARAMETER(argv);
#endif

	// Open the device using the VID, PID
	
	handle = hid_open(0x050d, 0x3201, NULL);
	if (!handle) {
		printf("unable to open device\n");
 		return 1;
	}

	// Send command to toggle inputs

	memset(buf,0,sizeof(buf));
	
	buf[0] = 01;
	buf[1] = 06;
	res = hid_write(handle, buf, 17);

	hid_close(handle);

	/* Free static HIDAPI objects. */
	
	hid_exit();

	return 0;
}
