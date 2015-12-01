#ifndef _COMMANDE_SAISIR_
#define _COMMANDE_SAISIR_


#include <string>
#include <iostream>

#include "Commande.h"

using namespace std;

class CommandeSaisir : public Commande {

private:
	static CommandeSaisir *instance;
public:

    CommandeSaisir(Robot* r = nullptr, Invocateur * inv = nullptr):Commande("SAISIR"){
    	robot = r;
    	invocateur = inv;
    }

    
	void executer();
	void desexecuter();

	Commande * constructeurVirtuel(Robot* r, Invocateur * inv);
};

#endif