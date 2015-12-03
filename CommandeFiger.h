#ifndef _COMMANDE_FIGE_
#define _COMMANDE_FIGE_


#include <string>
#include <iostream>

#include "CommandeRobot.h"

using namespace std;

class CommandeFiger : public CommandeRobot {

private:
public:

    CommandeFiger(Robot* r = nullptr, Invocateur * inv = nullptr):CommandeRobot("FIGER"){
    	robot = r;
    	invocateur = inv;
    }

    
	void executer();
	void desexecuter();

	Commande * constructeurVirtuel(Invocateur * inv);
	
};

#endif