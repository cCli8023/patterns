#include "playProcess.h"
#include <iostream>

void playProcess::getRawData()
{
	std::cout << "getRawData" << std::endl;
}

void playProcess::render()
{
	std::cout << "render" << std::endl;
}

void playProcess::process()
{
	getRawData();
	decode();
	render();
}
