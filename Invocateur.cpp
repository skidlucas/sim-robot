#include "Invocateur.h"
#include "Robot.h"

#include <sstream>
#include <string>
#include <typeinfo>
#include <vector>

#include <algorithm>

static vector<string> listeCommande {"FIGER","REPARTIR","AVANCER","TOURNER","RENCONTRERPLOT","EVALUERPLOT","SAISIR","PESER","POSER"};

void help(){
    cout << "FIGER,REPARTIR,AVANCER,TOURNER,RENCONTRERPLOT,EVALUERPLOT,SAISIR,PESER,POSER" << endl;
}

int Invocateur::getInt(string message){
    int rep;
    cout << message << endl;
    cin >> rep;
    return rep;
}

string Invocateur::getString(string message){
    string rep;
    cout << message << endl;
    cin >> rep;
    return rep;
}

bool isCommande(string rep){
    if(find(listeCommande.begin(), listeCommande.end(), rep) != listeCommande.end()) {
        return true;
    } 
    return false;
}

void Invocateur::lire(Robot* r){

    while(true){
        string rep;
        cout << "Entrer une commande avec le bon nombre de paramètre (FIGER,AVANCER,...) :" << endl;
        cin >> rep;
        
        if(isCommande(rep)){
        	try{
            	Commande* com = Commande::nouvelleCommande(rep,r,this);
            	cout << typeid(*com).name() << endl;
           		com->executer();
        	}
        	catch(EtatRobot::Bad_State){
        		cout << "Vous ne pouver pas faire cette action dans cet état !!!" << endl;
        	}

        }
        else{
            cout << "probleme Commande inconnue" << endl;
        }

    }


}