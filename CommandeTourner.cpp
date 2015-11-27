#include "CommandeTourner.h"

CommandeTourner* CommandeTourner::instance = new CommandeTourner;


void CommandeTourner::executer(){
	direction = invocateur->getDirection("Donner la direction (N, E, S, O) : ");
    robot->tourner(direction);
}

void CommandeTourner::desexecuter(){


}

Commande * CommandeTourner::constructeurVirtuel(Robot* r, Invocateur * inv){
	Commande* commande = new CommandeTourner(r,inv);
    pileCommandes().push(commande);
	return commande;
}

