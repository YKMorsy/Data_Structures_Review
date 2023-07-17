output: main.o Stack.o
	g++ main.o Stack.o -o output

main.o: main.cpp
	g++ -c main.cpp

Linked_List.o: Stack.cpp Stack.h
	g++ -c Stack.cpp

clean:
	del *.o output.exe