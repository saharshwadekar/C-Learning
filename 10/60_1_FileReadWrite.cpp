#include <iostream>
#include <fstream>

/*
The useful classes for workking eith files in c++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/

/*
In order to work with in c++, you will have to open it. 
primarily, there are two ways to open a file:
1. using the Constructor
2. Using the member function open() of the class
*/

using namespace std;


int main()
{
    string st = "Harry_bhai" , st2;
    // Opening files Using  Constructor & writing it.
    ofstream out("60_1_Sample.txt");   // write Operation
    out << st;


    // Opening files Using  Constructor & reading it.(saving of file is necessary)
    ifstream in("60_2_Sample.txt");  // read Operation
    // in >> st2;
    getline(in,st2);
    cout << st2;
    getline(in,st2);
    cout << st2;
    return 0;
}