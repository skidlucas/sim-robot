#ifndef _COMMANDE_AVANCER_
#define _COMMANDE_AVANCER_


#include <string>
#include <iostream>

#include "CommandeRobot.h"

using namespace std;

class CommandeAvancer : public CommandeRobot {

private:
	int X;
	int Y;
	int prevX = 0;
	int prevY = 0;
public:

    CommandeAvancer(Robot* r = nullptr, Invocateur * inv = nullptr):CommandeRobot("AVANCER"){
    	robot = r;
    	invocateur = inv;
    	X = r->getPosition().getx();
		Y = r->getPosition().gety();
    }

    
	void executer();
	void desexecuter();

	Commande * constructeurVirtuel(Invocateur * inv);

	
};

#endif