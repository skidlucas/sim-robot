#ifndef _COMMANDE_
#define _COMMANDE_


#include <string>
#include <map>
#include <iostream>

using namespace std;

class Commande {

private:

public:

	class ErreurCommandeException{};

	Commande(string c){
		mapCommandes()[c] = this;
	}

	static map<string, Commande *>& mapCommandes();

	virtual void executer();
	virtual void desexecuter();

	static Commande * nouvelleCommande(string c);
	virtual Commande * constructeurVirtuel();



};

#endif

