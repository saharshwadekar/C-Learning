#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Connecting files with hout stream
    ofstream hout("61_1_sample.txt");

    // Geting informaation and write it into file
    string name;
    cout << "Enter your name :: ";
    cin >> name;

    // displaying in file
    hout << "My name is " << name;

    // closing of file
    hout.close();

    /************************************************/
    // Connecting files with hin stream
    ifstream hin("61_1_sample.txt");

    // Geting informaation and write it into file
    string Content;
    // hin >> Content;
    getline(hin, Content);


    // display in console
    cout << Content;

    // closing of file
    hin.close();

    return 0;
}