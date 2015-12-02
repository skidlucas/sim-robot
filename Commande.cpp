#include "Commande.h"


map<string, Commande *>& Commande::mapCommandes(){
	static map<string, Commande *>* commandes = new map<string, Commande *>;
  	return *commandes;
}

stack<Commande*>& Commande::pileCommandes(){
	static stack<Commande*>* pile = new stack<Commande*>;
  	return *pile;
}

bool Commande::reversible(){
	return true;
}

void Commande::executer(){
	throw ErreurCommandeException();

}

void Commande::desexecuter(){
	throw ErreurCommandeException();
}


Commande * Commande::nouvelleCommande(string c, Invocateur * inv){
	return mapCommandes()[c]->constructeurVirtuel(inv);
}

Commande * Commande::constructeurVirtuel(Invocateur * inv){
	throw ErreurCommandeException();
}

