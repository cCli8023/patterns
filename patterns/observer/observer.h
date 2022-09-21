#pragma once
class observer
{
};

class audio {
public:
	void play();
};

class record {
public:
	void recordStart();
};

class appMsg {
public:
	void sendMsgToApp();

};

class osd {
public:
	void setAlarmOsd();

};