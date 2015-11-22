#include "Invocateur.h"
#include "Robot.h"

#include <typeinfo>
#include <vector>





void Invocateur::lire(Robot* r){

    // while(true){

    //     string rep;
    //     cout << "Entrer une commande (FIGER,REPARTIR,AVANCER,TOURNER,RENCONTRERPLOT,EVALUERPLOT,SAISIR,PESER,POSER) :" << endl;
    //     cin >> rep;

    //     Commande* com = Commande::nouvelleCommande(rep,r);

    //     switch(rep){
    //         case "AVANCER":
    //             int x = 0;
    //             int y = 0;
    //             cout << "x ?" << endl;
    //             cin >> x;
    //             cout << "y ?" << endl;
    //             cin >> y;
    //             vector<int> v;
    //             v.push_back(x);
    //             v.push_back(y);
    //             com->setPara(v);
    //         break;
    //         case "TOURNER":
    //         break;
    //         case "RENCONTRERPLOT":
    //         break;       
    //         case "SAISIR":
    //         break;
    //         default:
    //         break;
    //     }

    //     cout << typeid(*com).name() << endl;
    //     com->executer();

    // }

    vector<string> v;


	Commande* com = Commande::nouvelleCommande("FIGER",r);
    cout << typeid(*com).name() << endl;
    com->executer();

    com = Commande::nouvelleCommande("REPARTIR",r);
    cout << typeid(*com).name() << endl;
    com->executer();

    com = Commande::nouvelleCommande("AVANCER",r);
    cout << typeid(*com).name() << endl;
    v.push_back("1");
    v.push_back("2");
    com->setPara(v);
    com->executer();

    com = Commande::nouvelleCommande("TOURNER",r);
    cout << typeid(*com).name() << endl;
    v.clear();
    v.push_back("S");
    com->setPara(v);
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