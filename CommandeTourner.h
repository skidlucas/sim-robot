#ifndef _COMMANDE_TOURNER_
#define _COMMANDE_TOURNER_


#include <string>
#include <iostream>

#include "CommandeRobot.h"

using namespace std;

class CommandeTourner : public CommandeRobot {

private:
	static CommandeTourner *instance;
	string direction = "";
	string directionPrev;
public:

    CommandeTourner(Robot* r = nullptr, Invocateur * inv = nullptr):CommandeRobot("TOURNER"){
    	robot = r;
    	invocateur = inv;
    }

    
	void executer();
	void desexecuter();
	
	Commande * constructeurVirtuel(Invocateur * inv);
	
};

#endif