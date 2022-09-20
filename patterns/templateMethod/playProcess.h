#pragma once

/*
	getRawData -> decode -> render
*/

class playProcess
{

public:

	void getRawData();
	virtual void decode() = 0;
	void render();

	void process();
};

