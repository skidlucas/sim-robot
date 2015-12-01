#ifndef _COMMANDE_QUITTER_
#define _COMMANDE_QUITTER_


#include <string>
#include <iostream>
#include <cstdlib>

#include "Commande.h"

using namespace std;

class CommandeQuitter : public Commande {

private:
	static CommandeQuitter *instance;
public:

    CommandeQuitter(Robot* r = nullptr, Invocateur * inv = nullptr):Commande("QUITTER"){
    	robot = r;
    	invocateur = inv;
    }

    bool reversible(){
    	return false;
    }
	void executer();
	void desexecuter();

	Commande * constructeurVirtuel(Robot* r, Invocateur * inv);

	
};

#endif