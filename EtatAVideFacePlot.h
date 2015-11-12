#ifndef _VIDE_PLOT_
#define _VIDE_PLOT_

#include <stdio.h>
#include <string.h>

#include "EtatEnRoute.h"
#include "EtatEnChargeFacePlot.h"

using namespace std;


class EtatAVideFacePlot : public EtatEnRoute {

private:
	static EtatAVideFacePlot *instance;

public:
	void evaluerPlot();
	EtatRobot *saisir();
	EtatRobot *tourner();

	static EtatAVideFacePlot *getInstance(){
		return instance;
	}


};


#endif