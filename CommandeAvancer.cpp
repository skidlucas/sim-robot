#include "CommandeAvancer.h"

CommandeAvancer* CommandeAvancer::instance = new CommandeAvancer;


void CommandeAvancer::executer(){
	prevX = X;
	prevY = Y;
	X = invocateur->getInt("X : ");
	Y = invocateur->getInt("Y : ");
	robot->avancer(X,Y);
}

void CommandeAvancer::desexecuter(){
	this->robot->avancer(prevX, prevY);
    pileCommandes().pop();
}

Commande * CommandeAvancer::constructeurVirtuel(Invocateur * inv){
	CommandeAvancer* commande = new CommandeAvancer(robot, inv);
	commande->X = X;
    commande->Y = Y;
    pileCommandes().push(commande);
	return commande;
}

