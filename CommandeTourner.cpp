#include "CommandeTourner.h"

CommandeTourner* CommandeTourner::instance = new CommandeTourner;


void CommandeTourner::executer(){
    robot->tourner(direction);
}

void CommandeTourner::desexecuter(){
	
}

Commande * CommandeTourner::constructeurVirtuel(Robot* r){
	return new CommandeTourner(r);
}

void CommandeTourner::setPara(vector<string> listePrara){
	direction = listePrara[0];
}