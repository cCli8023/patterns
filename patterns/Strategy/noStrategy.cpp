#include "noStrategy.h"
#include <iostream>

void noStrategy::init(int socType)
{
	switch (socType) {
	case eSoc::hisi: {
		std::cout << "hisi init" << std::endl;
		break;
	}
		

	case eSoc::sigmstar: {
		std::cout << "sigmstar init" << std::endl;
		break;
	}

	case eSoc::rk: {
		std::cout << "rk init" << std::endl;
		break;
	}
	
	case eSoc::horizon: {
		std::cout << "horizon init" << std::endl;
		break;
	}

	default:
		break;
	}

}
