#include "EtatAVide.h"
#include "EtatAVideFacePlot.h"


#include <stdio.h>
#include <iostream>

EtatAVide* EtatAVide::instance = new EtatAVide;


EtatRobot *  EtatAVide::avancer(){
	return EtatAVide::getInstance();
}

EtatRobot * EtatAVide::tourner(){
	return EtatAVide::getInstance();
}

EtatRobot * EtatAVide::rencontrerPlot(){
	return EtatAVideFacePlot::getInstance();
}

