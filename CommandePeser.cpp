#include "CommandePeser.h"

CommandePeser* CommandePeser::instance = new CommandePeser;


void CommandePeser::executer(){
    robot->peser();

}

void CommandePeser::desexecuter(){
	
}

Commande * CommandePeser::constructeurVirtuel(Invocateur * inv){    
	return new CommandePeser(robot, inv);
}

