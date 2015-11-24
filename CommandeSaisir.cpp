#include "CommandeSaisir.h"

CommandeSaisir* CommandeSaisir::instance = new CommandeSaisir;


void CommandeSaisir::executer(){
	int p = invocateur->getInt("Donner le poids de l'objet à saisir : ");
	Objet obj(p);
    robot->saisir(obj);

}

void CommandeSaisir::desexecuter(){
	
}

Commande * CommandeSaisir::constructeurVirtuel(Robot* r, Invocateur * inv){
	return new CommandeSaisir(r,inv);
}

