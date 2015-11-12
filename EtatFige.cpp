#include "EtatFige.h"


EtatFige* EtatFige::instance = new EtatFige;

EtatRobot * EtatFige::repartir(){
	return etatPrecedent;
}


void EtatFige::setEtatPrecedent(EtatRobot *etat){
	etatPrecedent = etat;
}

