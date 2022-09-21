#pragma once
#include "streamInterface.h"

class flipStream : public streamInterface
{
public:
	flipStream(streamInterface* p) {
		_stream = p;
	}
	void getStream() override;

private:
	streamInterface* _stream;
};

