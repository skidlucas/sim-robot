#include "Commande.h"


map<string, Commande *>& Commande::mapCommandes(){
	static map<string, Commande *>* commandes = new map<string, Commande *>;
  	return *commandes;
}

void Commande::executer(){
	throw ErreurCommandeException();

}

void Commande::desexecuter(){
	throw ErreurCommandeException();
}


Commande * Commande::nouvelleCommande(string c){
	return mapCommandes()[c]->constructeurVirtuel();
}

Commande * Commande::constructeurVirtuel(){
	throw ErreurCommandeException();
}