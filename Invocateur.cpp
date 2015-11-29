#include "Invocateur.h"
#include "Robot.h"

#include <sstream>
#include <string>
#include <typeinfo>
#include <vector>
#include <cctype>
#include <algorithm>
#include <stdlib.h>

static vector<string> listeCommande {"FIGER","REPARTIR","AVANCER","TOURNER","RENCONTRERPLOT","EVALUERPLOT","SAISIR","PESER","POSER"};

void help(){
    cout << "FIGER, REPARTIR, AVANCER, TOURNER, RENCONTRERPLOT, EVALUERPLOT, SAISIR, PESER, POSER, ANNULER, QUITTER" << endl;
}

bool isNum(string s){
    for (int i = 0; i < s.size(); i++)
        if (!isdigit(s[i]))
            return false;
    return true;
}

int Invocateur::getInt(string message){
    string rep;
    cout << message;
    cin >> rep;

    while(!isNum(rep)) {
        cout << "Erreur, veuillez entrer un nombre : ";
        cin.clear();
        cin.ignore(10000, '\n');
        cin >> rep;
    } 
    
    return stoi(rep);
}

bool isDirection(string s){
    if (s == "N" || s == "E" || s == "S" || s == "O"){
        return true;
    }
    return false;
}

string Invocateur::getDirection(string message){
    string rep;
    cout << message;
    cin >> rep;

    while (!isDirection(rep)) {
        cout << "Erreur, veuillez entrer une direction parmi N, E, S, O : ";
        cin.clear();
        cin.ignore(10000, '\n');
        cin >> rep;
    }

    return rep;
}

bool isCommande(string rep){
    if(find(listeCommande.begin(), listeCommande.end(), rep) != listeCommande.end()) {
        return true;
    } 
    return false;
}

void Invocateur::lire(Robot* r){
    cout << "--- SIMULATEUR DE ROBOT ---" << endl << "Commande HELP pour avoir la liste des commandes." << endl;

    while(true){
        string rep;
        cout << "Entrer une commande :" << endl;
        cin >> rep;
        
        if(rep == "HELP"){
            help();
        } else if (rep == "ANNULER") {
            if (Commande::pileCommandes().size() == 0){
                cout << "Aucune action à annuler." << endl;
            } else if (Commande::pileCommandes().size() > 0){
                Commande::pileCommandes().top()->desexecuter();
            }  
        } else if (rep == "QUITTER"){
            exit(0);
        } else if (!isCommande(rep)) {
            cout << "Commande inconnue. Veuillez réessayer." << endl;
        } else {
            try {
                Commande* com = Commande::nouvelleCommande(rep,r,this);
                com->executer();
            } catch(EtatRobot::Bad_State){
                cout << "Erreur: action impossible dans cet état !" << endl;
            }
        }

        cin.clear();
        cin.ignore(10000, '\n');

    }


}