#include <stdio.h>
#include <iostream>
#include "Robot.h"


void Robot::saisir(Objet obj){
	try{
		etat = etat.saisir();
		objet = obj;
	}
	
	catch(EtatRobot::Exception e){

	}

}

void Robot::afficher(){
	cout << position.getx() << " , " << position.gety() << endl;

}