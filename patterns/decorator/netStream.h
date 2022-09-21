#pragma once
#include "streamInterface.h"

class netStream : public streamInterface
{
public:
	void getStream() override;
};

