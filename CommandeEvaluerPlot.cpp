#include "CommandeEvaluerPlot.h"


void CommandeEvaluerPlot::executer(){
    robot->evaluerPlot();
}

void CommandeEvaluerPlot::desexecuter(){
	pileCommandes().pop();

}

Commande * CommandeEvaluerPlot::constructeurVirtuel(Invocateur * inv){
	Commande* commande = new CommandeEvaluerPlot(robot, inv);
    pileCommandes().push(commande);
	return commande;
}
