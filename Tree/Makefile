output: main.o Tree.o
	g++ main.o Tree.o -o output

main.o: main.cpp
	g++ -c main.cpp

Linked_List.o: Tree.cpp Tree.h
	g++ -c Tree.cpp

clean:
	del *.o output.exe