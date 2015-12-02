#include "CommandeRencontrerPlot.h"

CommandeRencontrerPlot* CommandeRencontrerPlot::instance = new CommandeRencontrerPlot;


void CommandeRencontrerPlot::executer(){
	int h = invocateur->getInt("Donner la hauteur du plot: ");
	Plot plot(h);
    robot->rencontrerPlot(plot);
}

void CommandeRencontrerPlot::desexecuter(){
	
}

Commande * CommandeRencontrerPlot::constructeurVirtuel(Invocateur * inv){
	return new CommandeRencontrerPlot(robot, inv);
}
