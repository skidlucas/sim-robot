#include "CommandePeser.h"

CommandePeser* CommandePeser::instance = new CommandePeser;


void CommandePeser::executer(){
    robot->peser();

}

void CommandePeser::desexecuter(){
	pileCommandes().pop();
}

Commande * CommandePeser::constructeurVirtuel(Robot* r, Invocateur * inv){
	Commande* commande = new CommandePeser(r,inv);
    pileCommandes().push(commande);
	return commande;
}

