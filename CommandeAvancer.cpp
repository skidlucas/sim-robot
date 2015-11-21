#include "CommandeAvancer.h"

CommandeAvancer* CommandeAvancer::instance = new CommandeAvancer;


void CommandeAvancer::executer(){
	robot->avancer(1,1);
}

void CommandeAvancer::desexecuter(){
	
}

Commande * CommandeAvancer::constructeurVirtuel(Robot* r){
	return new CommandeAvancer(r);
}