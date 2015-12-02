#ifndef _INVOCATEUR_
#define _INVOCATEUR_


#include <string>
#include <iostream>

#include "Commande.h"
#include "Robot.h"

using namespace std;

class Invocateur{

private:

public:

	void lire();

	int getInt(string message);

	string getDirection(string message);

};

#endif