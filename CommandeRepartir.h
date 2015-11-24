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

    CommandeRepartir(Robot* r = nullptr, Invocateur * inv = nullptr):Commande("REPARTIR"){
    	robot = r;
    	invocateur = inv;
    }


	void executer();
	void desexecuter();

	Commande * constructeurVirtuel(Robot* r, Invocateur * inv);

	
};

#endif