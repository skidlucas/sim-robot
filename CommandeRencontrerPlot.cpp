#include "CommandeRencontrerPlot.h"

CommandeRencontrerPlot* CommandeRencontrerPlot::instance = new CommandeRencontrerPlot;


void CommandeRencontrerPlot::executer(){
	int h = invocateur->getInt("Donner la hauteur du plot: ");
	Plot plot(h);
    robot->rencontrerPlot(plot);
}

void CommandeRencontrerPlot::desexecuter(){
	
}

Commande * CommandeRencontrerPlot::constructeurVirtuel(Robot* r, Invocateur * inv){
	return new CommandeRencontrerPlot(r,inv);
}
