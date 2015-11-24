#ifndef _COMMANDE_TOURNER_
#define _COMMANDE_TOURNER_


#include <string>
#include <iostream>

#include "Commande.h"

using namespace std;

class CommandeTourner : public Commande {

private:
	static CommandeTourner *instance;
	string direction;
public:

    CommandeTourner(Robot* r = nullptr, Invocateur * inv = nullptr):Commande("TOURNER"){
    	robot = r;
    	invocateur = inv;
    }


	void executer();
	void desexecuter();
	
	Commande * constructeurVirtuel(Robot* r, Invocateur * inv);
	
};

#endif