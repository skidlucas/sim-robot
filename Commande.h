#ifndef _COMMANDE_
#define _COMMANDE_


#include <string>
#include <map>
#include <iostream>

using namespace std;

class Commande {

private:

public:

	Commande(string c){
		mapCommandes()[c] = this;
	}

	class Exception{};

	static map<string, Commande *> mapCommandes();

	virtual void executer();
	virtual void desexecuter();

	Commande * nouvelleCommande(string c);
	virtual Commande * constructeurVirtuel();

};

#endif