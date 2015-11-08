#include <stdio.h>
#include <string.h>

using namespace std;

class Objet {

private:
	int poids;

public:

	Objet(int p = 0):poids(p){}

	int getPoids();


};