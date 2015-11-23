#ifndef _COMMANDE_SAISIR_
#define _COMMANDE_SAISIR_


#include <string>
#include <iostream>

#include "Commande.h"

using namespace std;

class CommandeSaisir : public Commande {

private:
	static CommandeSaisir *instance;
public:

    CommandeSaisir(Robot* r = nullptr):Commande("SAISIR"){
    	robot = r;
    }


	void executer();
	void desexecuter();

	Commande * constructeurVirtuel(Robot* r);

	void setPara(vector<string> listePrara);
};

#endif