#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream out;
    out.open("62_1_Sample.txt");
    out << "this is me...\nyou are fabulous\n\twhat's up?";
    out.close();

/**********************************************/

    ifstream in;
    in.open("62_1_Sample.txt");
    string st;
    // getline(in,st);
    // // in >> st;
    // cout << st;

    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }

    in.close();
    return 0;
}