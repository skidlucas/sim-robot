#ifndef _FIGE_
#define _FIGE_

#include <stdio.h>
#include <string.h>

#include "EtatRobot.h"
#include "EtatEnRoute.h"

using namespace std;


class EtatFige : public EtatRobot {

private:
	EtatRobot *etatPrecedent = nullptr;
	static EtatFige *instance;

public:
	EtatRobot *repartir();
	void setEtatPrecedent(EtatRobot *etat);

	static EtatFige *getInstance(){
		return instance;
	}

};


#endif