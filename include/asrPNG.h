#include <png.h>
#include <string>
#include "asrPixel.h"

using namespace std;

class asrPNG{
private:
	string filename;
	int width;
	int height;
	png_bytep* pixels;
	asrPixel*** pixelMap;

public:
	
	asrPNG(string fn, int w, int h);
	~asrPNG();

	//getters
	string getFilename();
	asrPixel* getPixel(int x, int y);

	int createFile(string fn);
	int writeValues();
};
