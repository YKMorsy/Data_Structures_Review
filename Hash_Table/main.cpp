#include <iostream>
#include "Hash_Table.h"
using namespace std;

int main()
{
    // good hash function
    Hash_Table good_hash_table(500, true);

    good_hash_table.insert("test", 1);
    cout << good_hash_table.getValue("test") << "\n";

    good_hash_table.insert("test", 10);
    cout << good_hash_table.getValue("test") << "\n";

    good_hash_table.insert("tester", 2);
    cout << good_hash_table.getValue("tester") << "\n";

    cout << "bad hash function test \n";

    // bad hash function to test collisions
    Hash_Table bad_hash_table(500, false);

    bad_hash_table.insert("test", 1);
    bad_hash_table.insert("tfrt", 2);
    cout << bad_hash_table.getValue("test") << "\n";
    cout << bad_hash_table.getValue("tfrt") << "\n";

    return 0;
}