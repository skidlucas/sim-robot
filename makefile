all : 
	g++ -std=c++11 *.cpp -o robot

clean :
	-rm -f *.o robot


