#include "Robot.h"


#include <stdio.h>
#include <iostream>

int main(int argc, char const *argv[])
{
	Robot r;
	//Objet obj;
	r.avancer(1,1);
	cout << r.getPosition().getx() << endl; //Ca marche
	Plot plot(5);
	r.rencontrerPlot(plot);
	cout << r.evaluerPlot() << endl;
	//r.saisir(obj);
	//r.afficher();

	return 0;
}