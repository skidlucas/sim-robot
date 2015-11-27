#include "CommandePoser.h"

CommandePoser* CommandePoser::instance = new CommandePoser;


void CommandePoser::executer(){
    robot->poser();

}

void CommandePoser::desexecuter(){
	
}

Commande * CommandePoser::constructeurVirtuel(Robot* r, Invocateur * inv){
	Commande* commande = new CommandePoser(r,inv);
    pileCommandes().push(commande);
	return commande;
}

