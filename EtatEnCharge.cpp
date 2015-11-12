#include "EtatEnCharge.h"
#include "EtatEnChargeFacePlot.h"


EtatEnCharge* EtatEnCharge::instance = new EtatEnCharge;


EtatRobot * EtatEnCharge::avancer(){
	return EtatEnCharge::getInstance();
}

void EtatEnCharge::peser(){}

EtatRobot * EtatEnCharge::rencontrerPlot(){
	return EtatEnChargeFacePlot::getInstance();
}

EtatRobot * EtatEnCharge::tourner(){
	return EtatEnCharge::getInstance();
}