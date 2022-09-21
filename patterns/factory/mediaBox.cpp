#include "mediaBox.h"
#include "iostream"

void mp4::parse()
{
	std::cout << "mp4 parse " << std::endl;
}

void flv::parse()
{
	std::cout << "flv parse " << std::endl;
}

void avi::parse()
{
	std::cout << "avi parse " << std::endl;
}

mediaInterface* mp4fac::create()
{
	return new mp4;
}

mediaInterface* flvfac::create()
{
	return new flv;
}

mediaInterface* avifac::create()
{
	return new avi;
}
