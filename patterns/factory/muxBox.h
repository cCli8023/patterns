#pragma once

#include "factoryInterface.h"

class muxBox {
public:

	void setFac(factoryInterface* p) {
		_fac = p;
	}

	void run() {
		//����ָ��box��ʵ��
		//���ַ�ʽ��1.ͨ���������� 2.ͨ��ʹ���ߴ�����
		_box = _fac->create();
		_box->parse();
	}
private:
	mediaInterface* _box;
	factoryInterface* _fac;
};

