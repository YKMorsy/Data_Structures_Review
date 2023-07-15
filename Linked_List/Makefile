output: main.o Linked_List.o
	g++ main.o Linked_List.o -o output

main.o: main.cpp
	g++ -c main.cpp

Linked_List.o: Linked_List.cpp Linked_List.h
	g++ -c Linked_List.cpp

clean:
	del *.o output.exe