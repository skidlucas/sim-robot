#include "CommandePeser.h"

CommandePeser* CommandePeser::instance = new CommandePeser;


void CommandePeser::executer(){
    robot->peser();

}

void CommandePeser::desexecuter(){
	
}

Commande * CommandePeser::constructeurVirtuel(Robot* r){
	return new CommandePeser(r);
}