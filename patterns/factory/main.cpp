#include "muxBox.h"
#include "mediaBox.h"

int main() {
	
	mp4fac* fac1 = new mp4fac;
	avifac* fac2 = new avifac;
	flvfac* fac3 = new flvfac;

	muxBox box;
	box.setFac(fac1);
	box.run();

	box.setFac(fac2);
	box.run();

	box.setFac(fac3);
	box.run();

}