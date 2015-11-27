#include "CommandeAvancer.h"

CommandeAvancer* CommandeAvancer::instance = new CommandeAvancer;


void CommandeAvancer::executer(){
	X = invocateur->getInt("X : ");
	Y = invocateur->getInt("Y : ");
	robot->avancer(X,Y);
}

void CommandeAvancer::desexecuter(){

}

Commande * CommandeAvancer::constructeurVirtuel(Robot* r, Invocateur * inv){
	Commande* commande = new CommandeAvancer(r,inv);
    pileCommandes().push(commande);
	return commande;
}

