#pragma once

#include "factoryInterface.h"

class mp4 : public mediaInterface {
public:
	void parse() override;
};

class flv : public mediaInterface {
public:
	void parse() override;

};

class avi : public mediaInterface {
public:
	void parse() override;

};

class mp4fac : public factoryInterface {
public:
	mediaInterface* create() override;
};

class flvfac : public factoryInterface {
public:
	mediaInterface* create() override;
};

class avifac : public factoryInterface {
public:
	mediaInterface* create() override;
};