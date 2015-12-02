#include "CommandeQuitter.h"

CommandeQuitter* CommandeQuitter::instance = new CommandeQuitter;



void CommandeQuitter::executer(){
	exit(0);
}

void CommandeQuitter::desexecuter(){
	
}

Commande * CommandeQuitter::constructeurVirtuel(Invocateur * inv){
	return new CommandeQuitter(inv);
}

