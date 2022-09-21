#pragma once

#include "changeInterface.h"
#include <vector>

class observed
{
public:

	void changge();
	void addObserver(changeInterface*);

private:
	std::vector<changeInterface*> _observerList;
};

