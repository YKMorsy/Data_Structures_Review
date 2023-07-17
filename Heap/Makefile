output: main.o Heap.o
	g++ main.o Heap.o -o output

main.o: main.cpp
	g++ -c main.cpp

Linked_List.o: Heap.cpp Heap.h
	g++ -c Heap.cpp

clean:
	del *.o output.exe