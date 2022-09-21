#pragma once
#include "streamInterface.h"


class mirrorStream : public streamInterface
{
public:
	mirrorStream(streamInterface* p) {
		_stream = p;
	}

	void getStream() override;

private:
	streamInterface* _stream;

};

