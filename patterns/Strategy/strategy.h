#pragma once

class socInterface {
public:

	virtual void init() = 0;

	virtual ~socInterface() {}

};

class strategy {

public:
	strategy(socInterface* pins) {
		_ins = pins;
	}
	socInterface* _ins;

};


class socHisi : public socInterface {
public:
	void init() override;

};

class socSigmstar : public socInterface {
public:
	void init() override;

};

class socRk : public socInterface {
public:
	void init() override;

};

//if add horizon
class socHorizon : public socInterface {
public:
	void init() override;

};
