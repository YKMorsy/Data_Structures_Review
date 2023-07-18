output: main.o Hash_Table.o
	g++ main.o Hash_Table.o -o output

main.o: main.cpp
	g++ -c main.cpp

Hash_Table.o: Hash_Table.cpp Hash_Table.h
	g++ -c Hash_Table.cpp

clean:
	del *.o output.exe