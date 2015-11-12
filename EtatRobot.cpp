#include "EtatRobot.h"

#include <stdio.h>
#include <iostream>


EtatRobot * EtatRobot::avancer(){
	throw Bad_State();
}

EtatRobot * EtatRobot::tourner(){
	throw Bad_State();
}

EtatRobot * EtatRobot::saisir(){
	throw Bad_State();
}

EtatRobot * EtatRobot::poser(){
	throw Bad_State();
}

void EtatRobot::peser(){
	throw Bad_State();
}

EtatRobot * EtatRobot::rencontrerPlot(){
	throw Bad_State();
}

void EtatRobot::evaluerPlot(){
	throw Bad_State();
}

EtatRobot * EtatRobot::figer(){
	throw Bad_State();
}

EtatRobot * EtatRobot::repartir(){
	throw Bad_State();
}

