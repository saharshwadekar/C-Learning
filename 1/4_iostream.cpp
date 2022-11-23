// iostream --> input output stream
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "\nEnter the value of num1 :"; // '<<' insertion operator
    cin >> num1;                           // '>>' Extraction operator

    cout << "\nEnter the value of num2 :"; // '<<' insertion operator
    cin >> num2;                           // '>>' Extraction operator

    cout << "\nThe sum is :" << num1 + num2 << "\n";
    return 0;
}
