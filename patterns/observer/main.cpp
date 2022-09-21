#include "observed.h"
#include "observer.h"

int main() {
	audio* observerAudio = new audio;
	record* observerRecord = new record;
	osd* observerOsd = new osd;
	appMsg* observerAppMsg = new appMsg;

	observed obed;
	obed.addObserver(observerAudio);
	obed.addObserver(observerRecord);
	obed.addObserver(observerOsd);
	obed.addObserver(observerAppMsg);

	obed.changge();
}