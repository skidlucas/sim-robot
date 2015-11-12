#ifndef _ETAT_ROBOT_
#define _ETAT_ROBOT_

#include <stdio.h>
#include <string.h>

class EtatRobot {

private:

public:

class Bad_State{};

EtatRobot *avancer();
EtatRobot *tourner();
EtatRobot *saisir();
EtatRobot *poser();
void peser();
EtatRobot *rencontrerPlot();
void evaluerPlot();
EtatRobot *figer();
EtatRobot *repartir();

};


#endif