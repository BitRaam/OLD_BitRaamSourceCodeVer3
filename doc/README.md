Bitraam 0.8.2 BETA 
====================

Copyright (c) 2009-2013 Bitraam Developers

Distributed under the [MIT/X11 software license](http://www.opensource.org/licenses/mit-license.php).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](http://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.


Intro
---------------------
Bitraam is a free open source peer-to-peer electronic cash system that is
completely decentralized, without the need for a central server or trusted
parties.  Users hold the crypto keys to their own money and transact directly
with each other, with the help of a P2P network to check for double-spending.


Setup
---------------------
[Bitraam-Qt](http://bitraam.org/en/download) is the original Bitraam client and it builds the backbone of the network. However, it downloads and stores the entire history of Bitraam transactions; depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more.

### Unix

You need the Qt4 run-time libraries to run Bitraam-Qt. On Debian or Ubuntu:

	sudo apt-get install libqtgui4

Unpack the files into a directory and run:

- bin/32/bitraam-qt (GUI, 32-bit)
- bin/32/bitraamd (headless, 32-bit)
- bin/64/bitraam-qt (GUI, 64-bit)
- bin/64/bitraamd (headless, 64-bit)



### Windows

Unpack the files into a directory and run bitraam-qt.exe.

### Need Help?

* See the documentation at the [Bitraam Wiki](https://en.bitraam.it/wiki/Main_Page)
for help and more information.
* Ask for help on [#bitraam](http://webchat.freenode.net?channels=bitraam) on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net?channels=bitraam).
* Ask for help on the [BitraamTalk](https://bitraamtalk.org/) forums.

Building
---------------------
- [Bitraam-Qt Readme](readme-qt.md)
- [OSX Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-msw.md)

Development
---------------------
- [Coding Guidelines](coding.md)
- [Multiwallet Qt Development](multiwallet-qt.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://dev.visucore.com/bitraam/doxygen/)
- [Translation Process](translation_process.md)
- [Unit Tests](unit-tests.md)

Other Pages
---------------------
- [Assets Attribution](assets-attribution.md)
- [Files](files.md)
- [Tor Support](tor.md)