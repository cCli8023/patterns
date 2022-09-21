#pragma once
#include "streamInterface.h"

class chipsdkStream : public streamInterface
{
public:
	void getStream() override;
};

