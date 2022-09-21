#include "observed.h"

void observed::changge()
{
	for (int i = 0; i < _observerList.size(); i++) {
		_observerList.at(i)->change();
	}
}

void observed::addObserver(changeInterface* p)
{
	_observerList.emplace_back(p);
}
