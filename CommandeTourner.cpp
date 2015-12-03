#include "CommandeTourner.h"


void CommandeTourner::executer(){
	if (direction != ""){
		directionPrev = direction;
	}
	
	string tmpDirection = invocateur->getDirection("Donner la direction (N, E, S, O) : ");
    robot->tourner(tmpDirection);

    direction = tmpDirection;
}

void CommandeTourner::desexecuter(){
	this->robot->tourner(this->directionPrev);
    pileCommandes().pop();
}

Commande * CommandeTourner::constructeurVirtuel(Invocateur * inv){
	CommandeTourner* commande = new CommandeTourner(robot,inv);
	commande->directionPrev = direction;
    commande->direction = direction;
    pileCommandes().push(commande);
	return commande;
}

