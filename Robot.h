#ifndef _ROBOT_
#define _ROBOT_

#include <string>
#include <typeinfo>
#include <vector>

#include "Afficheur.h"

#include "EtatRobot.h"
#include "Position.h"
#include "Plot.h"
#include "Objet.h"

#include "EtatAVide.h"
#include "EtatAVideFacePlot.h"
#include "EtatEnCharge.h"
#include "EtatEnChargeFacePlot.h"



using namespace std;

class Robot{

private:
	string direction;
	EtatRobot * etat;
	Position position;
	Plot plot;
	Objet objet;

	vector<Afficheur> afficheurs;  //Probleme de conversion Afficher et 



public:

	Robot(string dir = "N"):direction(dir){
		etat = EtatAVide::getInstance();
		Position position(0,0);

	}

	void avancer(int x, int y);
	void tourner(string direction);
	void saisir(Objet obj);
	void poser();
	int peser();
	void rencontrerPlot(Plot p);
	int evaluerPlot();
	void figer();
	void repartir();

	EtatRobot * getEtat();
	Position getPosition();
	Plot getPlot();
	string getDirection();
	Objet getObjet();

	
	//Observer schema
	void attacherAfficheur(Afficheur a);
	void detacherAfficheur(Afficheur a);
	void notifier(string message);



};

#endif