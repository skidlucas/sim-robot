#include "CommandeRepartir.h"

CommandeRepartir* CommandeRepartir::instance = new CommandeRepartir;


void CommandeRepartir::executer(){
    robot->repartir();
}

void CommandeRepartir::desexecuter(){
	
}

Commande * CommandeRepartir::constructeurVirtuel(Robot* r, Invocateur * inv){
	return new CommandeRepartir(r,inv);
}
