#ifndef _COMMANDE_FIGE_
#define _COMMANDE_FIGE_


#include <string>
#include <iostream>

#include "Commande.h"

using namespace std;

class CommandeFiger : public Commande {

private:
	static CommandeFiger *instance;
public:

    CommandeFiger(Robot* r = nullptr):Commande("FIGER"){
    	robot = r;
    }


	void executer();
	void desexecuter();

	Commande * constructeurVirtuel(Robot* r);

	void setPara(vector<string> listePrara);
	
};

#endif