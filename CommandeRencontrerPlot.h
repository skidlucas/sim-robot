#ifndef _COMMANDE_RENCONTRER_
#define _COMMANDE_RENCONTRER_


#include <string>
#include <iostream>

#include "Commande.h"

using namespace std;

class CommandeRencontrerPlot : public Commande {

private:
	static CommandeRencontrerPlot *instance;
public:

    CommandeRencontrerPlot(Robot* r = nullptr, Invocateur * inv = nullptr):Commande("RENCONTRERPLOT"){
    	robot = r;
    	invocateur = inv;
    }


	void executer();
	void desexecuter();

	Commande * constructeurVirtuel(Robot* r, Invocateur * inv);
	
	
};

#endif