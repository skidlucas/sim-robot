#include "CommandeAnnuler.h"

CommandeAnnuler* CommandeAnnuler::instance = new CommandeAnnuler;



void CommandeAnnuler::executer(){
	if (pileCommandes().size() == 0){
        cout << "Aucune action à annuler." << endl;
    } else if (pileCommandes().size() > 0){
            pileCommandes().top()->desexecuter();
    } 
}

void CommandeAnnuler::desexecuter(){
	
}

Commande * CommandeAnnuler::constructeurVirtuel(Invocateur * inv){
	return new CommandeAnnuler(inv);
}

