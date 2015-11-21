#ifndef _COMMANDE_
#define _COMMANDE_

#include "Robot.h"

#include <string>
#include <map>
#include <iostream>

using namespace std;

class Commande {

private:
	
public:

	Robot* robot;

	class ErreurCommandeException{};

	Commande(string c){
		mapCommandes()[c] = this;
	}

	static map<string, Commande *>& mapCommandes();

	virtual void executer();
	virtual void desexecuter();

	static Commande * nouvelleCommande(string c, Robot* r);
	virtual Commande * constructeurVirtuel(Robot* r);



};

#endif

