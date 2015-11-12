#include <stdio.h>
#include <iostream>
#include "Robot.h"

#include <typeinfo>

///////////////////////// methodes ///////////////////:



void Robot::avancer(int x, int y){
	try{
		etat = etat->avancer();
		position.setx(x);
		position.sety(y);
		//notifier();

	}
	catch(EtatRobot::Bad_State()){
		//notifier("On ne peut pas avancer dans cette état");
	}
}

void Robot::tourner(string direction){
	try{
		etat = etat->tourner();
		this->direction = direction;
		//notifier();

	}
	catch(EtatRobot::Bad_State()){
		//notifier("le robot ne peut pas avancer dans cette état");
	}
}

void Robot::saisir(Objet obj){
	try{
		etat = etat->saisir();
		objet = obj;
		//notifier();

	}
	
	catch(EtatRobot::Bad_State()){
		//notifier("le robot ne peut saisir un objet ici");

	}

}

void Robot::poser(){
	try{
		etat = etat->poser();
		objet = NULL;
		//notifier();

	}
	
	catch(EtatRobot::Bad_State()){
		//notifier("le robot ne peut poser un objet ici");

	}
}

int Robot::peser(){
	try{
		etat->peser();
		int p = objet.getPoids();
		//notifier();

		return p;
	}
	
	catch(EtatRobot::Bad_State()){
		//notifier("le robot ne peut peser un objet ici ");

	}

	return -1;

}

void Robot::rencontrerPlot(Plot p){
	try{
		etat = etat->rencontrerPlot();
		plot = p;
		//notifier();

	}
	
	catch(EtatRobot::Bad_State()){
		//notifier("le robot ne peut rencontrer un plot ici");

	}

}

int Robot::evaluerPlot(){
		try{
		etat->evaluerPlot();
		int h = plot.getHauteur();
		//notifier();
		return h;
	}
	
	catch(EtatRobot::Bad_State()){
		//notifier("le robot ne peut évaluer un plot ici");

	}

	return -1;
}

void Robot::figer(){
	try{
		etat = etat->figer();

		//notifier();

	}
	
	catch(EtatRobot::Bad_State()){
		//notifier("le robot ne peut être figé ici");

	}

}

void Robot::repartir(){
	try{
		etat = etat->repartir();

		//notifier();

	}
	
	catch(EtatRobot::Bad_State()){
		//notifier("le robot ne peut repartir ici");

	}

}

// void Robot::afficher(){
// 	cout << position.getx() << " , " << position.gety() << endl;

// }


//////////////////////////  Getters  /////////////////////

EtatRobot * Robot::getEtat(){
	return etat;
}

Position Robot::getPosition(){
	return position;
}

Plot Robot::getPlot(){
	return plot;
}


string Robot::getDirection(){
	return direction;
}

Objet Robot::getObjet(){
	return objet;
}