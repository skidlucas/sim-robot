#include "CommandeEvaluerPlot.h"

CommandeEvaluerPlot* CommandeEvaluerPlot::instance = new CommandeEvaluerPlot;


void CommandeEvaluerPlot::executer(){
    robot->evaluerPlot();
}

void CommandeEvaluerPlot::desexecuter(){
	
}

Commande * CommandeEvaluerPlot::constructeurVirtuel(Robot* r, Invocateur * inv){
	return new CommandeEvaluerPlot(r,inv);
}


void CommandeEvaluerPlot::setPara(vector<string> listePrara){}