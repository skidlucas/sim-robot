#ifndef _COMMANDE_AIDE_
#define _COMMANDE_AIDE_


#include <string>
#include <iostream>

#include "Commande.h"

using namespace std;

class CommandeAide : public Commande {

private:
	static CommandeAide *instance;
public:

    CommandeAide(Robot* r = nullptr, Invocateur * inv = nullptr):Commande("AIDE"){
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