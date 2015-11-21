#ifndef _COMMANDE_POSER_
#define _COMMANDE_POSER_


#include <string>
#include <iostream>

#include "Commande.h"

using namespace std;

class CommandePeser : public Commande {

private:
	static CommandePeser *instance;
public:

    CommandePeser(Robot* r = nullptr):Commande("PESER"){
    	robot = r;
    }


	void executer();
	void desexecuter();

	Commande * constructeurVirtuel(Robot* r);
	
};

#endif