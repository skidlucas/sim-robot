#include "EtatEnRoute.h"
#include "EtatFige.h"


EtatRobot * EtatEnRoute::figer(){
	EtatFige::getInstance()->setEtatPrecedent(this);

	return EtatFige::getInstance();

}