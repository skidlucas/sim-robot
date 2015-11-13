#ifndef _VIDE_
#define _VIDE_

#include <stdio.h>
#include <string.h>
#include <iostream>

#include <typeinfo>

#include "EtatEnRoute.h"

using namespace std;


class EtatAVide : public EtatEnRoute {

private:
	static EtatAVide * instance;

public:
	EtatRobot *rencontrerPlot();
	EtatRobot *avancer();
	EtatRobot *tourner();

	static EtatAVide *getInstance(){
		return instance;
	}

};


#endif