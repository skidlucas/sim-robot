#include "Invocateur.h"
#include "Robot.h"

#include <sstream>
#include <string>
#include <typeinfo>
#include <vector>


void help(){
    cout << "FIGER,REPARTIR,AVANCER,TOURNER,RENCONTRERPLOT,EVALUERPLOT,SAISIR,PESER,POSER" << endl;
}

// vector<string> decouper(string s){
//     istream mot = (istream) s;
//     vector<string> v;

//     while( std::getline(s,mot,',') ){
//         v.push_back(mot);
//     }

// }

void Invocateur::lire(Robot* r){


    // while(true){
    //     string rep;
    //     string para1 = "";
    //     string para2 = ""; 

    //     cout << "Entrer une commande avec le bon nombre de paramètre (FIGER,AVANCER 2 2, ...) :" << endl;
    //     cin >> rep >> endl;

    //     vector<string> v = decouper(rep);

    //     cout << v[0] << endl;



        // Commande* com = Commande::nouvelleCommande(rep,r);

        // vector<int> v;
        // v.push_back(x);
        // v.push_back(y);
        // com->setPara(v);


        // cout << typeid(*com).name() << endl;
        // com->executer();


    //}



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