#include <stdio.h>
#include <string.h>

using namespace std;

class Position{

private:
	int x;
	int y;

public:

	Position(int PosX = 0, int PosY = 0):x(PosX),y(PosY){}

	int getx();
	int gety();
	void setx(int PosX);
	void sety(int PosY);


};