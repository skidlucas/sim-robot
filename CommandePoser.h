#ifndef _COMMANDE_POSER_
#define _COMMANDE_POSER_


#include <string>
#include <iostream>

#include "CommandeRobot.h"

using namespace std;

class CommandePoser : public CommandeRobot {

private:
	static CommandePoser *instance;
	Objet objet;
public:

    CommandePoser(Robot* r = nullptr, Invocateur * inv = nullptr):CommandeRobot("POSER"){
    	robot = r;
    	invocateur = inv;
    }

    
	void executer();
	void desexecuter();

	Commande * constructeurVirtuel(Invocateur * inv);
	
};

#endif