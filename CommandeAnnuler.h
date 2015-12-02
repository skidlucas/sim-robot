#ifndef _COMMANDE_ANNULER_
#define _COMMANDE_ANNULER_


#include <string>
#include <iostream>

#include "Commande.h"

using namespace std;

class CommandeAnnuler : public Commande {

private:
	static CommandeAnnuler *instance;
public:

    CommandeAnnuler(Invocateur * inv = nullptr):Commande("ANNULER"){
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