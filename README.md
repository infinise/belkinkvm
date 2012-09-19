belkinkvm
=========

Small command-line utility to switch outputs on Belkin's Flip series of KVM switches via USB (http://belkin.com/flip). Basically it's a reverse-engineered version of the menubar utility that Belkin provides but without any sort of interface which makes it possible to automate and control with scripts and hotkeys.

Usage
-----

1. Download, re-compile it if you're fancy
2. Run `belkinkvm`
3. Be amazed as your KVM switches

Next up
-------

Cross-platform compatibility. Since 99% of the code is based on the cross-platform HIDAPI the only thing that should be missing are Linux and Windows makefiles.