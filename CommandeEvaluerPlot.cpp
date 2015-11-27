#include "CommandeEvaluerPlot.h"

CommandeEvaluerPlot* CommandeEvaluerPlot::instance = new CommandeEvaluerPlot;


void CommandeEvaluerPlot::executer(){
    robot->evaluerPlot();
}

void CommandeEvaluerPlot::desexecuter(){
	pileCommandes().pop();

}

Commande * CommandeEvaluerPlot::constructeurVirtuel(Robot* r, Invocateur * inv){
	Commande* commande = new CommandeEvaluerPlot(r,inv);
    pileCommandes().push(commande);
	return commande;
}
