#include "CommandeSaisir.h"

CommandeSaisir* CommandeSaisir::instance = new CommandeSaisir;


void CommandeSaisir::executer(){
	Objet obj(10);
    robot->saisir(obj);

}

void CommandeSaisir::desexecuter(){
	
}

Commande * CommandeSaisir::constructeurVirtuel(Robot* r){
	return new CommandeSaisir(r);
}

void CommandeSaisir::setPara(vector<string> listePrara){}