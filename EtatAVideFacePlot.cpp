#include "EtatAVideFacePlot.h"
#include "EtatAVide.h"


EtatAVideFacePlot* EtatAVideFacePlot::instance = new EtatAVideFacePlot;


EtatRobot * EtatAVideFacePlot::saisir(){
	return EtatEnChargeFacePlot::getInstance();
}


EtatRobot * EtatAVideFacePlot::tourner(){
	return EtatAVide::getInstance();
}

void EtatAVideFacePlot::evaluerPlot(){}

