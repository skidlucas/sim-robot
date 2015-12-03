#ifndef _COMMANDE_REPARTIR_
#define _COMMANDE_REPARTIR_


#include <string>
#include <iostream>

#include "CommandeRobot.h"

using namespace std;

class CommandeRepartir : public CommandeRobot {

private:
public:

    CommandeRepartir(Robot* r = nullptr, Invocateur * inv = nullptr):CommandeRobot("REPARTIR"){
    	robot = r;
    	invocateur = inv;
    }

    
	void executer();
	void desexecuter();

	Commande * constructeurVirtuel(Invocateur * inv);

	
};

#endif