#ifndef _ROBOT_
#define _ROBOT_

#include <string>
#include "EtatRobot.h"
#include "Position.h"
#include "Plot.h"
#include "Objet.h"

#include "EtatAVide.h"
#include "EtatAVideFacePlot.h"
#include "EtatEnCharge.h"
#include "EtatEnChargeFacePlot.h"



using namespace std;

class Robot {

private:
	string direction;
	EtatRobot * etat;
	Position position;
	Plot plot;
	Objet objet;

public:

	Robot(string dir = "N"):direction(dir){
		etat = EtatAVide::getInstance();
		Position position(0,0);
		plot = NULL;
		objet = NULL;
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

	//void afficher();


};

#endif