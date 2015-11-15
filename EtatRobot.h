#ifndef _ETAT_ROBOT_
#define _ETAT_ROBOT_

#include <stdio.h>
#include <string.h>

class EtatRobot {

private:

public:

	class Bad_State{};

	virtual EtatRobot *avancer();
	virtual EtatRobot *tourner();
	virtual EtatRobot *saisir();
	virtual EtatRobot *poser();
	virtual void peser();
	virtual EtatRobot *rencontrerPlot();
	virtual void evaluerPlot();
	virtual EtatRobot *figer();
	virtual EtatRobot *repartir();

};


#endif