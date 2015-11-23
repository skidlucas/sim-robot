#include "CommandePoser.h"

CommandePoser* CommandePoser::instance = new CommandePoser;


void CommandePoser::executer(){
    robot->poser();

}

void CommandePoser::desexecuter(){
	
}

Commande * CommandePoser::constructeurVirtuel(Robot* r){
	return new CommandePoser(r);
}

void CommandePoser::setPara(vector<string> listePrara){}