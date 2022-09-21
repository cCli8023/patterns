#include "observed.h"
#include "observer.h"

int main() {
	audio* observerAudio = new audio;
	observed obed(observerAudio);

	obed.changge();
}