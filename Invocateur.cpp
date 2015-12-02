#include "Invocateur.h"
#include "Robot.h"

#include <sstream>
#include <string>
#include <typeinfo>
#include <vector>
#include <cctype>
#include <algorithm>

static vector<string> listeCommande;


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
    for(auto it = Commande::mapCommandes().cbegin(); it != Commande::mapCommandes().cend(); ++it){
        listeCommande.push_back(it->first);
    }

    cout << "--- SIMULATEUR DE ROBOT ---" << endl << "Commande AIDE pour avoir la liste des commandes. Elles ne sont pas sensibles à la casse." << endl;

    while(true){
        string rep;
        cout << "Entrer une commande :" << endl;
        cin >> rep;
        transform(rep.begin(), rep.end(),rep.begin(), ::toupper);
        
        if (!isCommande(rep)) {
            cout << "Commande inconnue. Veuillez réessayer." << endl;
        } else {
            Commande* com = Commande::nouvelleCommande(rep,r,this);
            try {
                com->executer();
            } catch(EtatRobot::Bad_State){
                cout << "Erreur: action impossible dans cet état !" << endl;
                if (com->reversible()){
                    Commande::pileCommandes().pop(); // pour enlever la mauvaise action de la pile
                }
                
            }
        }

        cin.clear();
        cin.ignore(10000, '\n');

    }


}