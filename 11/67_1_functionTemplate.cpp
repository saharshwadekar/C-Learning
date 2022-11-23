#include <iostream>
using namespace std;

template <class t1, class t2>

float funcAverage(t1 a, t2 b)
{
    float avg = (a + b) / 2;
    return avg;
}

template <class T>

void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main() 
{
    float a = funcAverage(5, 2);

    printf("The average is %f\n", a);

    int i = 9 , j = 5 ;
    cout << "The value of i is : "<< i << endl;
    cout << "The value of j is : "<< j << endl;
    swapp(i,j);
    cout << "The value of i is : "<< i << endl;
    cout << "The value of j is : "<< j << endl;
    return 0;
}