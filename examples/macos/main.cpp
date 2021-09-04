#include <iostream>
#include <asr.h>

using namespace std;

int main() {
	asr* a = new asr(300, 300);
	asrColor* c = new asrColor(255, 255, 0 ,1);
	asrVector* v = new asrVector(150, 150);
	a->assign(c, v);
	a->render();
	return 0;
}
