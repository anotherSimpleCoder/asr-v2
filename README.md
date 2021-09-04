# asr-v2


Documentation
-------------

asr-v2 is the second version of asr-v1(obviously lol), which still is based on SDL and in C++.
However a few things have changed:

- asr is now a rendering library for macOS and linux (since the windows compilation was a pain in the ass)

- its now using a different rendering algorithm, which will be explained later

- asr now has PNG support! (yay!) This means you can store your renders also as binary PNG files and share em around ;)

Get started
-----------

It's now not required to have the SDL2 framework installed, but still check it out it's cool.

However the including part stays the same

```cpp
#include "asr.h"
```

That's it! You're now able to use the asr library.


Use asr in your project
-----------------------

Now after you have included the asr library to your project, let's see on how to use it.

The difference now to asr-v1 is that you now have to declare your asr instance the following:

```cpp
asr* a = new asr(<width>, <height>);
```

And asr functions are called by:

```cpp
a-><asr function>
```

Later on when compiling you have to specify to your compiler that you are using the asr library:

### clang:

Linux:
```bash
	clang++ -I <path to asr's include dir> -c main.cpp
	clang++ -o main main.o asr2.so
```


macOS:
```bash
	clang++ -I <path to asr's include dir> -c main.cpp
	clang++ -o main main.o asr2.dylib
```

### g++:

Linux:
```bash
	g++ -I <path to asr's include dir> -c main.cpp
	g++ -o main main.o asr.so
```

macOS:
```bash
	g++ -I <path to asr's include dir> -c main.cpp
	g++ -o main.o asr.dylib
```

asr functions
-------------

Here is an overview of all the asr functions:

	* ```asr(int width, int height);```		The constructor for the asr instance.
	* ```~asr();```					The destructor to terminate an asr session.
	* ```int getResolution(int component);```	Get the resolution of the asr session.
	* ```asrScreen* getScreen();```			Get the screen instance.
	* ```void assign(asrColor* c, asrVector* v);```	Assigns RGBA color to a pixel.
	* ```void render();```				Renders the image.
	* ```void makePNG(string title);```		Writes the render onto a PNG file. (please give it a filename to save in your fs)

How does asr work?
------------------

Version 2 doesn't use the block algorithm anymore. Instead asr uses a pixelmap, where all pixels have a fixed size (1px) and each pixel can be assigned a color inside the RGBA space. Also now instead of constructing each pixel just when assigned all pixels on the map are being rendered. This ensures that you will get a full picture even if it is just a pixel, which is being assigned.


How does the png extension in asr work?
---------------------------------------

In comparison to Version 1, Version 2 now offers a PNG extension. This means that you can store your 2D renders as PNG files, which makes it
possible to make asr renders more accessible (instead of using asrealize to view the render). It works the following way:
The pixelmap of the asrScreen module is being inputted to the png extension. Then all the meta data of the asrScreen is being written into the
meta section of the PNG file. After that the extension scans through the pixel map and copies the color values and stores them onto the PNG file pixel by pixel and in the end the finished file will be stored in your filesystem. This whole thing was made possible thanks to libpng! (go check it out its an awesome library to solve problems regarding images and is actually quite easy to understand).


Building
--------

There are binary libraries included. HOWEVER if your operating system isn't able to handle the library building is the next best option.

To build asr you need the following libraries:

	* SDL2
	* libpng
	
You can get them the following way:

Debian/Ubuntu/(other distros based on Debian):

```sudo apt-get install libsdl2-dev libpng-dev```

Arch Linux:

```sudo pacman -S sdl2 libpng```

Fedora/CentOS:

```sudo dnf install sdl2 libpng```

FreeBSD:

```sudo pkg install sdl2 linux-c7-libpng-1.5.13_3```

macOS (using homebrew):

```brew install sdl2 libpng```


After you're done with the installation just change directory to the asr dir.

```cd asr```

Then you navigate to the makefiles folder and choose the Makefile depending on your operating system

For linux/FreeBSD:

```cd makefile/linux```

For macOS:

```cd makefile/macos```

After that you copy the makefile onto the main asr folder:

```cp Makefile <path where you stored asr>/asr/```

Now you can build the library by typing:

```make compile```

And voila you have now a binary lib for your operating system! (yay :D)

And if you want to build a static library just type:

```make compileStatic```

(As always) Some words for the end
----------------------------------

So yea after a year we have now a 2nd version of asr, which actually took me just a day now instead of 2 entire weeks. (heheyy)
Actually some plans from the asr-v1 documentation are also now realised or still in the making:

	- the pattern file thing -> asrScript/ASRealize
	- the editor (still in the making, but it's almost there)

And also this time there are some plans again:

	- a new revision of asrScript (asrScript standard beta) and therefore a new version of ASRealize (now asrealize)

Again if you also have some ideas, feel free to tell me. 
(If you are done reading this then I am probably implementing the png support and after that start to think of a new concept of asrScript)
