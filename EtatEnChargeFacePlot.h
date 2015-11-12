#ifndef _CHARGE_PLOT_
#define _CHARGE_PLOT_

#include <stdio.h>
#include <string.h>

#include "EtatEnRoute.h"

using namespace std;


class EtatEnChargeFacePlot : public EtatEnRoute {

private:
	static EtatEnChargeFacePlot *instance;

public:
	EtatRobot *poser();
	EtatRobot *tourner();
	void peser();
	void evaluerPlot();

	static EtatEnChargeFacePlot *getInstance(){
		return instance;
	}

};


#endif