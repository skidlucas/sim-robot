#ifndef _COMMANDE_FIGE_
#define _COMMANDE_FIGE_


#include <string>
#include <iostream>

#include "Commande.h"

using namespace std;

//class CommandeFiger : public Commande {
class CommandeFiger {

private:
	static CommandeFiger *instance;

public:

	CommandeFiger(string c = "FIGER"){}

	// CommandeFiger():Commande("FIGER") {
	// }


	void executer();
	void desexecuter();

	// Commande * constructeurVirtuel();
	
};

#endif