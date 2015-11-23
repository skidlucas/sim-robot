#include "CommandeEvaluerPlot.h"

CommandeEvaluerPlot* CommandeEvaluerPlot::instance = new CommandeEvaluerPlot;


void CommandeEvaluerPlot::executer(){
    robot->evaluerPlot();
}

void CommandeEvaluerPlot::desexecuter(){
	
}

Commande * CommandeEvaluerPlot::constructeurVirtuel(Robot* r){
	return new CommandeEvaluerPlot(r);
}


void CommandeEvaluerPlot::setPara(vector<string> listePrara){}