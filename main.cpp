#include "Robot.h"


#include <stdio.h>
#include <iostream>

int main(int argc, char const *argv[])
{
	Robot r;
	//Objet obj;
	r.avancer(1,1);
	cout << r.getPosition().getx() << endl; //Ca marche
	//r.saisir(obj);
	//r.afficher();

	return 0;
}