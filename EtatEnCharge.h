#ifndef _CHARGE_
#define _CHARGE_

#include <stdio.h>
#include <string.h>

#include "EtatEnRoute.h"

using namespace std;


class EtatEnCharge : public EtatEnRoute {

private:
	static EtatEnCharge *instance;

public:
	EtatRobot *avancer();
	void peser();
	EtatRobot *rencontrerPlot();
	EtatRobot *tourner();

	static EtatEnCharge *getInstance(){
		return instance;
	}
};


#endif