#include "EtatEnChargeFacePlot.h"
#include "EtatEnCharge.h"
#include "EtatAVideFacePlot.h"


EtatEnChargeFacePlot* EtatEnChargeFacePlot::instance = new EtatEnChargeFacePlot;


EtatRobot * EtatEnChargeFacePlot::tourner(){
	return EtatEnCharge::getInstance();
}


EtatRobot * EtatEnChargeFacePlot::poser(){
	return EtatAVideFacePlot::getInstance();
}

void EtatEnChargeFacePlot::peser(){}


void EtatEnChargeFacePlot::evaluerPlot(){}

