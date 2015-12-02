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

    CommandeQuitter(Invocateur * inv = nullptr):Commande("QUITTER"){
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