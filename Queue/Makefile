output: main.o Queue.o
	g++ main.o Queue.o -o output

main.o: main.cpp
	g++ -c main.cpp

Linked_List.o: Queue.cpp Queue.h
	g++ -c Queue.cpp

clean:
	del *.o output.exe