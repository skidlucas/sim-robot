#include "CommandeAvancer.h"

CommandeAvancer* CommandeAvancer::instance = new CommandeAvancer;


void CommandeAvancer::executer(){
	robot->avancer(X,Y);
}

void CommandeAvancer::desexecuter(){
	
}

Commande * CommandeAvancer::constructeurVirtuel(Robot* r, Invocateur * inv){
	return new CommandeAvancer(r,inv);
}


void CommandeAvancer::setPara(vector<string> listePrara){
	if(listePrara.size() < 2){
		cout << "nb para !!!!" << endl;
		exit(1);
	}

	X = stoi(listePrara[0]);
	Y = stoi(listePrara[1]);
}