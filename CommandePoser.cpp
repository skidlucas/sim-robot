#include "CommandePoser.h"

CommandePoser* CommandePoser::instance = new CommandePoser;


void CommandePoser::executer(){
    robot->poser();

}

void CommandePoser::desexecuter(){
	
}

Commande * CommandePoser::constructeurVirtuel(Robot* r, Invocateur * inv){
	return new CommandePoser(r,inv);
}

