#ifndef _AFFICHEUR_CONSOLE_
#define _AFFICHEUR_CONSOLE_

#include <string>
#include "Afficheur.h"

using namespace std;

class AfficheurRobotConsole : public Afficheur{

private:

public:
	virtual void afficher(string message);


};

#endif