#include "CommandeFiger.h"


void CommandeFiger::executer(){
    robot->figer();
}

void CommandeFiger::desexecuter(){
	robot->repartir();
	pileCommandes().pop();
}

Commande * CommandeFiger::constructeurVirtuel(Invocateur * inv){
	Commande* commande = new CommandeFiger(robot, inv);
    pileCommandes().push(commande);
	return commande;}
