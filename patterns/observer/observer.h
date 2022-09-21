#pragma once

#include "changeInterface.h"

class observer
{
};

class audio :public changeInterface {
public:
	void change() override;
private:
	void play();
};

class record :public changeInterface {
public:
	void change() override;
private:
	void recordStart();
};

class appMsg :public changeInterface {
public:
	void change() override;
private:
	void sendMsgToApp();

};

class osd :public changeInterface {
public:
	void change() override;
private:
	void setAlarmOsd();

};