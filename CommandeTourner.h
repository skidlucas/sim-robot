#ifndef _COMMANDE_TOURNER_
#define _COMMANDE_TOURNER_


#include <string>
#include <iostream>

#include "CommandeRobot.h"

using namespace std;

class CommandeTourner : public CommandeRobot {

private:
	string direction = "";
	string directionPrev;
public:

    CommandeTourner(Robot* r = nullptr, Invocateur * inv = nullptr):CommandeRobot("TOURNER"){
    	robot = r;
    	invocateur = inv;
    	direction = r->getDirection();
    }

    
	void executer();
	void desexecuter();
	
	Commande * constructeurVirtuel(Invocateur * inv);
	
};

#endif