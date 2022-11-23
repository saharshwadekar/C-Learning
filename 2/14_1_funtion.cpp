#include <iostream>
using namespace std;

    // What is function 
    // function is a compartmentalisation of big work into small block
int calcsum(int , int ); // declaration of funtion
int main()      // <-- it is also a funtion(headfuntion) always be present
{
    int num1, num2;
    cout << "Enter the num1 :" ;
    cin >> num1;
    cout << "Enter the num2 :" ;
    cin >> num2;
    cout << "The sum of num1 + num2 = " << calcsum(num1,num2) << endl;  // funtion calling
    return 0;
}

int calcsum(int a , int b){  // funtion defination
    int c = a + b;
    return c;
}


/*
parameters

here,
num1 & num 2 = Actual parameters
a & b = formal parameter
*/
