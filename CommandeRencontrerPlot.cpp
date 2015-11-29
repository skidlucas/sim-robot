#include "CommandeRencontrerPlot.h"

CommandeRencontrerPlot* CommandeRencontrerPlot::instance = new CommandeRencontrerPlot;


void CommandeRencontrerPlot::executer(){
	int h = invocateur->getInt("Donner la hauteur du plot: ");
	Plot plot(h);
    robot->rencontrerPlot(plot);
}

void CommandeRencontrerPlot::desexecuter(){
	pileCommandes().pop();
}

Commande * CommandeRencontrerPlot::constructeurVirtuel(Robot* r, Invocateur * inv){
	Commande* commande = new CommandeRencontrerPlot(r,inv);
    pileCommandes().push(commande);
	return commande;
}
