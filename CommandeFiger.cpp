#include "CommandeFiger.h"

CommandeFiger* CommandeFiger::instance = new CommandeFiger;


void CommandeFiger::executer(){
    robot->figer();
}

void CommandeFiger::desexecuter(){
	robot->repartir();
	pileCommandes().pop();
}

Commande * CommandeFiger::constructeurVirtuel(Robot* r, Invocateur * inv){
	Commande* commande = new CommandeFiger(r,inv);
    pileCommandes().push(commande);
	return commande;}
