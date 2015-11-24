#include "CommandeFiger.h"

CommandeFiger* CommandeFiger::instance = new CommandeFiger;


void CommandeFiger::executer(){
    robot->figer();
}

void CommandeFiger::desexecuter(){
	
}

Commande * CommandeFiger::constructeurVirtuel(Robot* r, Invocateur * inv){
	return new CommandeFiger(r,inv);
}
