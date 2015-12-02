#ifndef _COMMANDE_
#define _COMMANDE_

#include "Invocateur.h"
#include "Robot.h"

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

	Invocateur * invocateur;

	static map<string, Commande *>& mapCommandes();
    static stack<Commande*>& pileCommandes();

	class ErreurCommandeException{};

	Commande(string c){
		mapCommandes()[c] = this;
	}


	virtual bool reversible();
	virtual void executer();
	virtual void desexecuter();

	static Commande * nouvelleCommande(string c, Invocateur * inv);
	virtual Commande * constructeurVirtuel(Invocateur * inv);


};

#endif

