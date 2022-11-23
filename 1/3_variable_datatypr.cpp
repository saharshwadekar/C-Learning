#include <iostream>
using namespace std;
int glo = 6;  // --> global variable
void sum(){
    int a;
    cout << glo << "\n";
}
int main(){
    int a = 3, b = 6;
    float pi = 3.141;
    int glo = 8;
    char c = 'R' ;
    bool is_true = true;
    sum();
    cout << glo << "\n";  // --> local variable
    cout << is_true << "\n";  // --> local variable

//     cout << "The A is "<< a << ".\nThe B is " << b << ".\nEnd\n" ;
//     cout << "\nPi is equal to the "<< pi <<  ".\n";
//     cout << "\nThe value of c is " << c << ".\n";
    return 0;
}