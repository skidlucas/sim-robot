#ifndef _COMMANDE_EVAL_PLOT_
#define _COMMANDE_EVAL_PLOT_


#include <string>
#include <iostream>

#include "CommandeRobot.h"

using namespace std;

class CommandeEvaluerPlot : public CommandeRobot {

private:
public:

    CommandeEvaluerPlot(Robot* r = nullptr, Invocateur * inv = nullptr):CommandeRobot("EVALUERPLOT"){
    	robot = r;
    	invocateur = inv;
    }

   
	void executer();
	void desexecuter();

	Commande * constructeurVirtuel(Invocateur * inv);
	
};

#endif