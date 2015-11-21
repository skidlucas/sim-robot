#ifndef _COMMANDE_AVANCER_
#define _COMMANDE_AVANCER_


#include <string>
#include <iostream>

#include "Commande.h"

using namespace std;

class CommandeAvancer : public Commande {

private:
	static CommandeAvancer *instance;
public:

    CommandeAvancer(Robot* r = nullptr):Commande("AVANCER"){
    	robot = r;
    }


	void executer();
	void desexecuter();

	Commande * constructeurVirtuel(Robot* r);
	
};

#endif