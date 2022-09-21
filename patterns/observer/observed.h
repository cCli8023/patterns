#pragma once

#include "changeInterface.h"

class observed
{
public:
	observed(changeInterface* p) {
		_audio = p;
	}
	void changge();

private:
	changeInterface* _audio;
};

