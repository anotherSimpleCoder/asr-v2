#include <png.h>
#include "asrScreen.h"

class asrPNG{
private:
	char* filename;
	asrScreen* screen;
	FILE* fp;
	char* title;
	png_structp png_ptr;
	png_infop info_ptr;
	png_bytep row;

public:
	asrPNG(char* fn, char* t, asrScreen* s);
	~asrPNG();

	int writeImage();
	
};
