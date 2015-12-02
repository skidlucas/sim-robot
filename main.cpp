#include "Robot.h"

#include <stdio.h>
#include <iostream>
#include <typeinfo>


#include "Invocateur.h"
#include "Commande.h"
#include "CommandeAvancer.h"
#include "CommandeSaisir.h"
#include "CommandeTourner.h"
#include "CommandePoser.h"
#include "CommandeRencontrerPlot.h"
#include "CommandePeser.h"
#include "CommandeEvaluerPlot.h"
#include "CommandeFiger.h"
#include "CommandeRepartir.h"

int main(int argc, char const *argv[])
{
	Robot r;
	Afficheur aff;
	r.attacherAfficheur(aff);
	Plot plot(5);
	Objet obj(10);

    Invocateur invo;

    CommandeAvancer avancer(&r);
    CommandeSaisir saisir(&r);
    CommandeTourner tourner(&r);
    CommandeRencontrerPlot rencontrer(&r);
    CommandePeser peser(&r);                 
    CommandePoser poser(&r);
    CommandeEvaluerPlot evaluer(&r);
    CommandeFiger figer(&r);
    CommandeRepartir repartir(&r);

    invo.lire();


    // cout << endl << " ----- TEST ROBOT -----" << endl << endl << "**** EtatAVide ****" << endl;
    // r.avancer(5,2);
    // r.tourner("S");
    
    // // ---- actions impossibles, renvoient une exception ----

    // // r.evaluerPlot();
    // // r.saisir(obj);
    // // r.poser();
    // // r.peser();
    // // r.repartir();

    // //On change d'état avec cette action
    // r.rencontrerPlot(plot);

    // cout << "**** EtatAVideFacePlot ****" << endl;
    // r.evaluerPlot();

    // // ---- actions impossibles, renvoient une exception ----

    // // r.avancer(0,9);
    // // r.peser();
    // // r.poser();
    // // r.repartir();
    // // r.rencontrerPlot(plot);

    // //On change d'état avec cette action
    // r.saisir(obj);


    // cout << "**** EtatEnChargeFacePlot ****" << endl;
    // r.peser();

    // // ---- actions impossibles, renvoient une exception ----

    // // r.repartir();
    // // r.avancer(1,2);
    // // r.evaluerPlot();
    // // r.saisir(obj);
    // // r.rencontrerPlot(plot);

    // //On change d'état avec cette action
    // r.tourner("E");

    // cout << "**** EtatEnCharge ****" << endl;

    // r.peser();
    // r.avancer(7,9);
    // r.tourner("O");

    // // ---- actions impossibles, renvoient une exception ----

    // // r.repartir();
    // // r.evaluerPlot();
    // // r.saisir(obj);
    // // r.rencontrerPlot(plot);

    // //On change d'état avec cette action
    // r.figer();

    // cout << "**** EtatFigé ****" << endl;

    // // ---- actions impossibles, renvoient une exception ----

    // // r.tourner("S");
    // // r.avancer(3,8);

    // cout << endl << " // RETOUR A L'ETAT INITIAL \\\\" << endl;

    // //On change d'état avec cette action
    // r.repartir();

    // cout << "**** EtatEnCharge ****" << endl;

    // r.rencontrerPlot(plot);

    // cout << "**** EtatEnChargeFacePlot ****" << endl;

    // r.poser();

    // cout << "**** EtatAVide ****" << endl;

    // r.tourner("N");

    // cout << "**** EtatAVide ****" << endl << endl << " ----- FIN -----" << endl;


	return 0;
}