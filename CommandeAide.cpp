#include "CommandeAide.h"

CommandeAide* CommandeAide::instance = new CommandeAide;



void CommandeAide::executer(){
	for(auto it = mapCommandes().cbegin(); it != mapCommandes().cend(); ++it){
    	cout << it->first << ", ";
	}
	cout << "\b\b" << '.' << endl; //pour enlever le dernier ", " et le remplacer par un '.'
}

void CommandeAide::desexecuter(){
	
}

Commande * CommandeAide::constructeurVirtuel(Robot* r, Invocateur * inv){
	return new CommandeAide(r, inv);
}

