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

    CommandePeser(Robot* r = nullptr, Invocateur * inv = nullptr):Commande("PESER"){
    	robot = r;
    	invocateur = inv;
    }


	void executer();
	void desexecuter();

	Commande * constructeurVirtuel(Robot* r, Invocateur * inv);
	
};

#endif