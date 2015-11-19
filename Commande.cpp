#include "Commande.h"

map<string, Commande *> Commande::mapCommandes(){
	static map<string, Commande *>* commandes = new map<string, Commande *>;
  	return * commandes;
}

Commande * Commande::nouvelleCommande(string c){
	return mapCommandes()[c]->constructeurVirtuel();
}

Commande * Commande::constructeurVirtuel(){
	throw Exception();
}