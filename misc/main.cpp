#include <iostream>
#include "asr.h"


using namespace std;

int main(int argc, char** argv){
	asr* a = new asr(300, 300);
	asrScreen* s = a->getScreen();
	
	int width = a->getResolution(ASR_WIDTH);
	int height = a->getResolution(ASR_HEIGHT);
	int size = width * height;

	asrColor* c = new asrColor(255, 0, 255, 1);
	asrVector* v = new asrVector(0, 0);
	a->assign(c, v);

	cout << "Width: " << width << endl;
	cout << "Height: " << height << endl;

	a->render();

	delete a;
/*
	for(int x = 0; x < width; x++){
		for(int y = 0; y < height; y++){
			asrPixel* p = s->getPixel(x, y);
			asrColor* c = p->getColor();
			
			uint8_t r, g, b, a;

			r = c->getColor(ASR_RED);
			g = c->getColor(ASR_GREEN); 
			b = c->getColor(ASR_BLUE);
			a = c->getColor(ASR_ALPHA);

			cout << "(" << x << "," << y << "): " << (int)r << ", " << (int)g << ", " << (int)b << ", " << (int)a << endl;
		}
	}
*/

	
	return 0;
}
