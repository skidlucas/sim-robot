#include "CommandeSaisir.h"


void CommandeSaisir::executer(){
	int p = invocateur->getInt("Donner le poids de l'objet à saisir : ");
	Objet obj(p);
    robot->saisir(obj);

}

void CommandeSaisir::desexecuter(){
	robot->poser();
	pileCommandes().pop();

}

Commande * CommandeSaisir::constructeurVirtuel(Invocateur * inv){
	Commande* commande = new CommandeSaisir(robot,inv);
    pileCommandes().push(commande);
	return commande;
}

