#include "CommandeFiger.h"

CommandeFiger* CommandeFiger::instance = new CommandeFiger;


void CommandeFiger::executer(){
    robot->figer();
}

void CommandeFiger::desexecuter(){
	
}

Commande * CommandeFiger::constructeurVirtuel(Robot* r){
	return new CommandeFiger(r);
}

void CommandeFiger::setPara(vector<string> listePrara){}