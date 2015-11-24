#ifndef _INVOCATEUR_
#define _INVOCATEUR_


#include <string>
#include <iostream>

#include "Commande.h"

using namespace std;

class Invocateur{

private:

public:

	void lire(Robot* r);

	int getInt(string message);

};

#endif