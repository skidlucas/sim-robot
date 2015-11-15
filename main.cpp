#include "Robot.h"


#include <stdio.h>
#include <iostream>
#include <typeinfo>


int main(int argc, char const *argv[])
{
	Robot r;
	Afficheur aff;
	r.attacherAfficheur(aff);
	r.avancer(1,1);
	Plot plot(5);
	r.rencontrerPlot(plot);
	Objet obj;
	r.saisir(obj);
	r.peser();

	r.poser();
	//r.peser(); //Bad_State

	r.figer();
	//r.avancer(3,3); //Bad_State

	r.repartir();

	//r.avancer(3,3); //Bad_State

	//r.tourner("N"); // meme direction donc mouvement null
	//r.avancer(3,3); // Bad_State

	r.tourner("S");
	r.avancer(2,2);


	return 0;
}