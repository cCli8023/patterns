#include "observer.h"
#include <iostream>

void audio::change()
{
	play();
}

void audio::play()
{
	std::cout << "audio play" << std::endl;
}

void record::change()
{
	recordStart();
}

void record::recordStart()
{
	std::cout << "recordStart" << std::endl;
}

void appMsg::change()
{
	sendMsgToApp();
}

void appMsg::sendMsgToApp()
{
	std::cout << "sendMsgToApp" << std::endl;
}

void osd::change()
{
	setAlarmOsd();
}

void osd::setAlarmOsd()
{
	std::cout << "setAlarmOsd" << std::endl;
}
