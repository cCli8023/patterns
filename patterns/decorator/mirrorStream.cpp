#include "mirrorStream.h"
#include <iostream>

void mirrorStream::getStream()
{
	std::cout << "mirror stream " << std::endl;
	_stream->getStream();
}
