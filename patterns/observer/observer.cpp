#include "observer.h"
#include <iostream>

void audio::play()
{
	std::cout << "audio play" << std::endl;
}

void record::recordStart()
{
	std::cout << "recordStart" << std::endl;
}

void appMsg::sendMsgToApp()
{
	std::cout << "sendMsgToApp" << std::endl;
}

void osd::setAlarmOsd()
{
	std::cout << "setAlarmOsd" << std::endl;
}
