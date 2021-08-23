#include <iostream>
#include <string>
#include <fstream>
#include "asrPNG.h"

using namespace std;

asrPNG::asrPNG(string fn, int w, int h){
	filename = fn;
	width = w;
	height = h;
	pixelMap = new asrPixel**[width];

	for(int x = 0; x < width; x++){
		pixelMap[x] = new asrPixel*[height];
	}
}

string asrPNG::getFilename(){
	return filename;
}

asrPixel* asrPNG::getPixel(int x, int y){
	return pixelMap[x][y];
}

int asrPNG::createFile(string fn){
	ofstresam pngFile(fn, ios::out | ios::binary);

	if(!pngFile.is_open()){
		cerr << "Error creating PNG file" << endl;	
	}

	png_structp png = png_create_write_struct(PNG_LIBPNG_VER_STRING; NULL, NULL, NULL);

	if(!png)
		return ASR_PNG_INVALID_PNG_PTR;

	png_infop info = png_create_info_struct(png);

	if(!info)
		return ASR_PNG_INVALID_INFO_PTR;

	if(setjmp(png_jmpbuf(png)))
		return 1;

	png_init_io(png, fp);
}
