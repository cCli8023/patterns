#pragma once

#include "mediaInterface.h"

class factoryInterface {

public:

	virtual mediaInterface* create() = 0;

};