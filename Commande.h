#ifndef _COMMANDE_
#define _COMMANDE_

#include "Robot.h"
#include "Invocateur.h"

#include <string>
#include <vector>
#include <stack>
#include <map>
#include <iostream>

using namespace std;

class Invocateur;
class Commande {

private:
	
public:

	Robot* robot;
	Invocateur * invocateur;

	static map<string, Commande *>& mapCommandes();
    static stack<Commande*>& pileCommandes();

	class ErreurCommandeException{};

	Commande(string c){
		mapCommandes()[c] = this;
	}



	virtual void executer();
	virtual void desexecuter();

	static Commande * nouvelleCommande(string c, Robot* r, Invocateur * inv);
	virtual Commande * constructeurVirtuel(Robot* r, Invocateur * inv);


};

#endif

