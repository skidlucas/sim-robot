#ifndef _COMMANDE_EVAL_PLOT_
#define _COMMANDE_EVAL_PLOT_


#include <string>
#include <iostream>

#include "Commande.h"

using namespace std;

class CommandeEvaluerPlot : public Commande {

private:
	static CommandeEvaluerPlot *instance;
public:

    CommandeEvaluerPlot(Robot* r = nullptr):Commande("EVALUERPLOT"){
    	robot = r;
    }


	void executer();
	void desexecuter();

	Commande * constructeurVirtuel(Robot* r);
	
	
};

#endif