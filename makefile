pa3: main.cpp Account.o Money.o
	g++ -std=c++11 -o pa3 main.cpp Account.o Money.o
	
Account.o: Account.h Account.cpp
	g++ -std=c++11 -c Account.h Account.cpp

Money.o: Money.h Money.cpp
	g++ -std=c++11 -c Money.h Money.cpp	
	
clean:
	rm pa3 *.o
