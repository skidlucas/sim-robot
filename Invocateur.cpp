#include "Invocateur.h"
#include "Robot.h"

#include <typeinfo>


void Invocateur::lire(Robot* r){
	Commande* com = Commande::nouvelleCommande("FIGER",r);
    cout << typeid(*com).name() << endl;
    com->executer();

    com = Commande::nouvelleCommande("REPARTIR",r);
    cout << typeid(*com).name() << endl;
    com->executer();

    com = Commande::nouvelleCommande("AVANCER",r);
    cout << typeid(*com).name() << endl;
    com->executer();

    com = Commande::nouvelleCommande("TOURNER",r);
    cout << typeid(*com).name() << endl;
    com->executer();

    com = Commande::nouvelleCommande("RENCONTRERPLOT",r);
    cout << typeid(*com).name() << endl;
    com->executer();

    com = Commande::nouvelleCommande("EVALUERPLOT",r);
    cout << typeid(*com).name() << endl;
    com->executer();
    
    com = Commande::nouvelleCommande("SAISIR",r);
    cout << typeid(*com).name() << endl;
    com->executer();

	com = Commande::nouvelleCommande("PESER",r);
    cout << typeid(*com).name() << endl;
    com->executer();

    com = Commande::nouvelleCommande("POSER",r);
    cout << typeid(*com).name() << endl;
    com->executer();




}