#include "CommandeTourner.h"

CommandeTourner* CommandeTourner::instance = new CommandeTourner;


void CommandeTourner::executer(){
	direction = invocateur->getString("Donner la direction (S,N,E,O) : ");
    robot->tourner(direction);
}

void CommandeTourner::desexecuter(){
	
}

Commande * CommandeTourner::constructeurVirtuel(Robot* r, Invocateur * inv){
	return new CommandeTourner(r,inv);
}

