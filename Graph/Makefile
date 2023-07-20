output: main.o Graph.o
	g++ main.o Graph.o -o output

main.o: main.cpp
	g++ -c main.cpp

Graph.o: Graph.cpp Graph.h
	g++ -c Graph.cpp

clean:
	del *.o output.exe