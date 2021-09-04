#include <iostream>
#include <asr.h>

using namespace std;

int main() {
	asr* asrInstance = new asr(300, 300);
	asrColor* c = new asrColor(255, 250, 0, 1);
	asrVector* v = new asrVector(150, 150);

	asrInstance->assign(c, v);
	asrInstance->render();

	delete asrInstance;
}
