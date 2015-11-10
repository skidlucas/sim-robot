
# targets

all : 
	g++ -std=c++11 *.cpp

test : main.o Robot.o
	g++ -g -Wall -std=c++11 -o test main.o Robot.o

main.o : main.cpp Robot.cpp
Robot.o : Robot.h Robot.cpp
# EtatRobot.o : EtatRobot.h EtatRobot.cpp 
# EtatEnRoute.o : EtatEnRoute.h EtatEnRoute.cpp 
# EtatFige.o : EtatFige.h EtatFige.cpp 

# EtatAVide.o : EtatAVide.h EtatAVide.cpp 
# EtatAVideFacePlot.o : EtatAVideFacePlot.h EtatAVideFacePlot.cpp 
# EtatEnCharge.o : EtatEnCharge.h EtatEnCharge.cpp 
# EtatEnChargeFacePlot.o : EtatEnChargeFacePlot.h EtatEnChargeFacePlot.cpp 
# EtatRobot.o : EtatRobot.h EtatRobot.cpp 

clean :
	-rm -f *.o test


