#include <iostream>
#include <sqlite3.h>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "SQLite version: " << sqlite3_libversion() << endl;
    return 0;
}
