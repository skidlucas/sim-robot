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

		notifier("Le robot a avancé jusqu'à la position (" + to_string(x) + "," + to_string(y) + ")");

	}
	catch(EtatRobot::Bad_State()){
		notifier("Le robot ne peut pas avancer dans cet état");
	}
}

void Robot::tourner(string direction){
	try{
		if(this->direction != direction){
			etat = etat->tourner();
		} 

		this->direction = direction;
		notifier("Le robot a tourné dans la direction : " + direction);

	}
	catch(EtatRobot::Bad_State()){
		notifier("Le robot ne peut pas avancer dans cet état");
	}
}

void Robot::saisir(Objet obj){
	try{
		etat = etat->saisir();
		objet = obj;
		notifier("Le robot a saisi un objet");

	}
	
	catch(EtatRobot::Bad_State()){
		notifier("Le robot ne peut saisir un objet ici");
	}

}

void Robot::poser(){
	try{
		etat = etat->poser();
		//objet = NULL;
		notifier("Le robot a posé un objet");

	}
	
	catch(EtatRobot::Bad_State()){
		notifier("Le robot ne peut poser un objet ici");

	}
}

int Robot::peser(){
	try{
		etat->peser();
		int p = objet.getPoids();
		notifier("Le robot a pesé un objet, qui fait : " + to_string(p));

		return p;
	}
	
	catch(EtatRobot::Bad_State()){
		notifier("Le robot ne peut peser un objet ici ");

	}

	return -1;

}

void Robot::rencontrerPlot(Plot p){
	try{
		etat = etat->rencontrerPlot();
		plot = p;
		notifier("Le robot a rencontré un plot");

	}
	
	catch(EtatRobot::Bad_State()){
		notifier("Le robot ne peut rencontrer un plot ici");

	}

}

int Robot::evaluerPlot(){
	try{
		etat->evaluerPlot();
		int h = plot.getHauteur();
		notifier("Le robot a évalué un plot de taille : " + to_string(h));
		return h;
	}
	
	catch(EtatRobot::Bad_State()){
		notifier("Le robot ne peut évaluer un plot ici");

	}

	return -1;
}

void Robot::figer(){
	try{
		etat = etat->figer();
		notifier("Le robot est figé");

	}
	
	catch(EtatRobot::Bad_State()){
		notifier("Le robot ne peut être figé ici");

	}

}

void Robot::repartir(){
	try{
		etat = etat->repartir();
		notifier("Le robot est reparti");

	}
	
	catch(EtatRobot::Bad_State()){
		notifier("Le robot ne peut repartir ici");

	}

}


void Robot::attacherAfficheur(Afficheur a){
	afficheurs.push_back(a);
}

void Robot::detacherAfficheur(Afficheur a){
}

void Robot::notifier(string message){
	for(Afficheur a : afficheurs){
		//cout << typeid(a).name() << endl;
		a.afficher(message);
	}
}


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