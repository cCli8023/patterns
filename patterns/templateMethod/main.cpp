#include "playProcess.h"
#include <iostream>

class myPlay : public playProcess {
public:

	void decode() override {
		std::cout << "mydecode " << std::endl;
	}
};

class yourPlay : public playProcess {
public:

	void decode() override {
		std::cout << "you decode " << std::endl;
	}
};

#define NO_TP 0
int main() {
	myPlay p;
#if NO_TP
	p.getRawData();
	p.decode();
	p.render();
#else
	p.process();
#endif

	yourPlay yp;
#if NO_TP
	yp.getRawData();
	yp.decode();
	yp.render();
#else
	yp.process();
#endif
}