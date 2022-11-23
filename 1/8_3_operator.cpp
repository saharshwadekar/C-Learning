#include <iostream>

using namespace std;

// ****************According to presidence operator*****************//
int main()
{
    int a = 3, b = 5;
    float c = (((a * 5) + b) - 10) / 3;
    cout << "The value of (((a*5) +b) - 45) /4 is " << c << endl;
    return 0;
}