#include "CommandeTourner.h"

CommandeTourner* CommandeTourner::instance = new CommandeTourner;


void CommandeTourner::executer(){
    robot->tourner(direction);
}

void CommandeTourner::desexecuter(){
	
}

Commande * CommandeTourner::constructeurVirtuel(Robot* r, Invocateur * inv){
	return new CommandeTourner(r,inv);
}

void CommandeTourner::setPara(vector<string> listePrara){
	direction = listePrara[0];
}