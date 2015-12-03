#include "CommandeAvancer.h"



void CommandeAvancer::executer(){
	prevX = X;
	prevX = Y;

	//On utilise des varaibles temporaires a cause des Bad_state qui peuvent remonter
	int tmpX = invocateur->getInt("X : ");
	int tmpY = invocateur->getInt("Y : ");
	robot->avancer(tmpX,tmpY);

	//On remplace les X et Y aprés avancer pour les cas où on a une exception
	X = tmpX;
	Y = tmpY;
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

