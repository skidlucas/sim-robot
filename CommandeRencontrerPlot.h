#ifndef _COMMANDE_RENCONTRER_
#define _COMMANDE_RENCONTRER_


#include <string>
#include <iostream>

#include "CommandeRobot.h"

using namespace std;

class CommandeRencontrerPlot : public CommandeRobot {

private:
public:

    CommandeRencontrerPlot(Robot* r = nullptr, Invocateur * inv = nullptr):CommandeRobot("RENCONTRERPLOT"){
    	robot = r;
    	invocateur = inv;
    }

    bool reversible(){
    	return false;
    }
	void executer();
	void desexecuter();

	Commande * constructeurVirtuel(Invocateur * inv);
	
	
};

#endif