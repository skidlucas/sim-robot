#ifndef _COMMANDE_PESER_
#define _COMMANDE_PESER_


#include <string>
#include <iostream>

#include "CommandeRobot.h"

using namespace std;

class CommandePeser : public CommandeRobot {

private:
public:

    CommandePeser(Robot* r = nullptr, Invocateur * inv = nullptr):CommandeRobot("PESER"){
    	robot = r;
    	invocateur = inv;
    }

    bool reversible(){
    	return false;
    }
	void executer();
	void desexecuter();

	Commande * constructeurVirtuel(Invocateur * inv);
	
};

#endif