#include "CommandeTourner.h"

CommandeTourner* CommandeTourner::instance = new CommandeTourner;


void CommandeTourner::executer(){
	if (direction != ""){
		directionPrev = direction;
	}
	
	direction = invocateur->getDirection("Donner la direction (N, E, S, O) : ");
    robot->tourner(direction);
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

