#ifndef _COMMANDE_ROBOT_
#define _COMMANDE_ROBOT_

#include "Robot.h"
#include "Invocateur.h"

#include <string>
#include <vector>
#include <stack>
#include <map>
#include <iostream>

using namespace std;

class Invocateur;

class CommandeRobot: public Commande {
	
protected:

	Robot* robot;

	CommandeRobot(string c, Robot* r = nullptr): Commande(c) {
		robot = r;
	}

};

#endif

