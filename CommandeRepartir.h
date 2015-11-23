#ifndef _COMMANDE_REPARTIR_
#define _COMMANDE_REPARTIR_


#include <string>
#include <iostream>

#include "Commande.h"

using namespace std;

class CommandeRepartir : public Commande {

private:
	static CommandeRepartir *instance;
public:

    CommandeRepartir(Robot* r = nullptr):Commande("REPARTIR"){
    	robot = r;
    }


	void executer();
	void desexecuter();

	Commande * constructeurVirtuel(Robot* r);
	
	void setPara(vector<string> listePrara);

	
};

#endif