#include "CommandeRencontrerPlot.h"

CommandeRencontrerPlot* CommandeRencontrerPlot::instance = new CommandeRencontrerPlot;


void CommandeRencontrerPlot::executer(){
	Plot plot;
    robot->rencontrerPlot(plot);
}

void CommandeRencontrerPlot::desexecuter(){
	
}

Commande * CommandeRencontrerPlot::constructeurVirtuel(Robot* r){
	return new CommandeRencontrerPlot(r);
}