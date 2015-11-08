#include <string>


#include "EtatRobot.h"
#include "Position.h"
#include "Plot.h"
#include "Objet.h"


using namespace std;

class Robot {

private:
	string direction;
	EtatRobot etat;
	Position position;
	Plot plot;
	Objet objet;

public:

	Robot(string dir = "N"):direction(dir){}

	// void avancer(int x, int y);
	// void tourner(String direction);
	void saisir(Objet obj);
	// void poser();
	// int peser();
	// void rencontrerPlot(Plot p);
	// int evaluerPlot();
	// void figer();
	// void repartir();
	void afficher();


};