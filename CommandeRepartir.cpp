#include "CommandeRepartir.h"

CommandeRepartir* CommandeRepartir::instance = new CommandeRepartir;


void CommandeRepartir::executer(){
    robot->repartir();
}

void CommandeRepartir::desexecuter(){
	
}

Commande * CommandeRepartir::constructeurVirtuel(Robot* r){
	return new CommandeRepartir(r);
}

void CommandeRepartir::setPara(vector<string> listePrara){}