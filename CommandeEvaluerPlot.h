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

    CommandeEvaluerPlot(Robot* r = nullptr, Invocateur * inv = nullptr):Commande("EVALUERPLOT"){
    	robot = r;
    	invocateur = inv;
    }

   
	void executer();
	void desexecuter();

	Commande * constructeurVirtuel(Robot* r, Invocateur * inv);
	
};

#endif