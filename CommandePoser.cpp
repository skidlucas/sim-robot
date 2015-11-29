#include "CommandePoser.h"

CommandePoser* CommandePoser::instance = new CommandePoser;


void CommandePoser::executer(){
	this->objet = this->robot->getObjet();
    robot->poser();

}

void CommandePoser::desexecuter(){
	this->robot->saisir(this->objet);
	pileCommandes().pop();
}

Commande * CommandePoser::constructeurVirtuel(Robot* r, Invocateur * inv){
	Commande* commande = new CommandePoser(r,inv);
    pileCommandes().push(commande);
	return commande;
}

