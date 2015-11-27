#include "CommandeRepartir.h"

CommandeRepartir* CommandeRepartir::instance = new CommandeRepartir;


void CommandeRepartir::executer(){
    robot->repartir();
}

void CommandeRepartir::desexecuter(){
	robot->figer();
	pileCommandes().pop();

}

Commande * CommandeRepartir::constructeurVirtuel(Robot* r, Invocateur * inv){
	Commande* commande = new CommandeRepartir(r,inv);
    pileCommandes().push(commande);
	return commande;
}
