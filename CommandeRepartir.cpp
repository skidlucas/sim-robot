#include "CommandeRepartir.h"


void CommandeRepartir::executer(){
    robot->repartir();
}

void CommandeRepartir::desexecuter(){
	robot->figer();
	pileCommandes().pop();

}

Commande * CommandeRepartir::constructeurVirtuel(Invocateur * inv){
	Commande* commande = new CommandeRepartir(robot,inv);
    pileCommandes().push(commande);
	return commande;
}
