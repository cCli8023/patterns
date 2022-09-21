#include "noStrategy.h"
#include "strategy.h"

int main() {

	noStrategy soc;

	soc.init(hisi);
	soc.init(sigmstar);
	soc.init(rk);
	soc.init(horizon);//if add horizon

	strategy s1(new socHisi);
	strategy s2(new socSigmstar);
	strategy s3(new socRk);
	strategy s4(new socHorizon);
	s1._ins->init();
	s2._ins->init();
	s3._ins->init();
	s4._ins->init();
}