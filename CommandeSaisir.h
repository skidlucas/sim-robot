#ifndef _COMMANDE_SAISIR_
#define _COMMANDE_SAISIR_


#include <string>
#include <iostream>

#include "CommandeRobot.h"

using namespace std;

class CommandeSaisir : public CommandeRobot {

private:
public:

    CommandeSaisir(Robot* r = nullptr, Invocateur * inv = nullptr):CommandeRobot("SAISIR"){
    	robot = r;
    	invocateur = inv;
    }

    
	void executer();
	void desexecuter();

	Commande * constructeurVirtuel(Invocateur * inv);
};

#endif