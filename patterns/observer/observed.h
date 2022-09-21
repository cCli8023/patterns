#pragma once

#include "changeInterface.h"
#include <vector>

class observedInterface {
public:
	virtual void changge() = 0;
	virtual void addObserver(changeInterface*) = 0;

	virtual ~observedInterface() {}
};

class observed : public observedInterface
{
public:

	void changge() override;
	void addObserver(changeInterface*) override;

private:
	std::vector<changeInterface*> _observerList;
};

