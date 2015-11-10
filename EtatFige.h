#ifndef _FIGE_
#define _FIGE_

#include <stdio.h>
#include <string.h>

#include "EtatRobot.h"
#include "EtatEnRoute.h"

using namespace std;


class EtatFige : public EtatRobot {

private:
	EtatEnRoute *etatPrecedent = nullptr;
	static EtatFige *instance;

public:
	// EtatRobot repartir();
	// setEtatPrecedent(EtatEnRoute etat);
	// EtatFige getInstance();

};


#endif