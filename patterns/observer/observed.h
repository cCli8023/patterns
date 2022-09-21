#pragma once

#include "observer.h"

class observed
{
public:
	observed(audio* p) {
		_audio = p;
	}
	void changge();

private:
	audio* _audio;
};

