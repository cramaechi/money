money: main.o money.o
	g++ main.o money.o -o money

main.o: main.cpp
	g++ -c main.cpp

money.o: money.cpp
	g++ -c money.cpp

clean:
	rm *.o money
