
# targets

test : main.o Robot.o
	g++ -g -Wall -std=c++11 -o test main.o Robot.o

main.o : main.cpp Robot.cpp
Robot.o : Robot.h Robot.cpp

clean :
	-rm -f *.o test


