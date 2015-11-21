#include "CommandeFiger.h"

CommandeFiger* CommandeFiger::instance = new CommandeFiger;


void CommandeFiger::executer(){

}

void CommandeFiger::desexecuter(){

}

Commande * CommandeFiger::constructeurVirtuel(){
	return new CommandeFiger();
}