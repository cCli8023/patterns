#pragma once

#include "factoryInterface.h"

class muxBox {
public:

	void setFac(factoryInterface* p) {
		_fac = p;
	}

	void run() {
		//这里指定box的实例
		//两种方式，1.通过工厂基类 2.通过使用者传进来
		_box = _fac->create();
		_box->parse();
	}
private:
	mediaInterface* _box;
	factoryInterface* _fac;
};

