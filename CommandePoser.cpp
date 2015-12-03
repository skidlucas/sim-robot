#include "CommandePoser.h"


void CommandePoser::executer(){
	this->objet = this->robot->getObjet();
    robot->poser();

}

void CommandePoser::desexecuter(){
	this->robot->saisir(this->objet);
	pileCommandes().pop();
}

Commande * CommandePoser::constructeurVirtuel(Invocateur * inv){
	Commande* commande = new CommandePoser(robot,inv);
    pileCommandes().push(commande);
	return commande;
}

