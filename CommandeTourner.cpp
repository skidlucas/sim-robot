#include "CommandeTourner.h"

CommandeTourner* CommandeTourner::instance = new CommandeTourner;


void CommandeTourner::executer(){
    robot->tourner("S");
}

void CommandeTourner::desexecuter(){
	
}

Commande * CommandeTourner::constructeurVirtuel(Robot* r){
	return new CommandeTourner(r);
}