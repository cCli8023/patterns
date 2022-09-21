#include "fileStream.h"
#include "flipStream.h"
#include "mirrorStream.h"


int main() {

// file flip mirror stream

	fileStream * f = new fileStream;
	flipStream* ff = new flipStream(f);
	mirrorStream* ms = new mirrorStream(ff);

	ms->getStream();
}