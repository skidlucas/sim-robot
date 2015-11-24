#ifndef _COMMANDE_POSER_
#define _COMMANDE_POSER_


#include <string>
#include <iostream>

#include "Commande.h"

using namespace std;

class CommandePoser : public Commande {

private:
	static CommandePoser *instance;
public:

    CommandePoser(Robot* r = nullptr, Invocateur * inv = nullptr):Commande("POSER"){
    	robot = r;
    	invocateur = inv;
    }


	void executer();
	void desexecuter();

	Commande * constructeurVirtuel(Robot* r, Invocateur * inv);

	void setPara(vector<string> listePrara);
	
};

#endif