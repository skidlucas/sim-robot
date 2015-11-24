#ifndef _COMMANDE_AVANCER_
#define _COMMANDE_AVANCER_


#include <string>
#include <iostream>

#include "Commande.h"

using namespace std;

class CommandeAvancer : public Commande {

private:
	static CommandeAvancer *instance;
	int X = 0;
	int Y = 0;
public:

    CommandeAvancer(Robot* r = nullptr, Invocateur * inv = nullptr):Commande("AVANCER"){
    	robot = r;
    	invocateur = inv;
    }

	void executer();
	void desexecuter();

	Commande * constructeurVirtuel(Robot* r, Invocateur * inv);

	
};

#endif