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

    CommandeRencontrerPlot(Robot* r = nullptr):Commande("RENCONTRERPLOT"){
    	robot = r;
    }


	void executer();
	void desexecuter();

	Commande * constructeurVirtuel(Robot* r);
	
	void setPara(vector<string> listePrara);

	
};

#endif