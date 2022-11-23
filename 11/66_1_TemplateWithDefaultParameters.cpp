#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>

class Saharsh
{
public:
    T1 a;
    T2 b;
    T3 c;
    Saharsh(T1 x, T2 y , T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void Display(void)
    {
        cout << "The value of a :" << a << endl;
        cout << "The value of b :" << b << endl;
        cout << "The value of c :" << c << endl << endl;
    }
};

int main()
{
    Saharsh<> s1(2, 5.6, 'r');
    s1.Display();
    Saharsh<float , char, char> s2(6.97, 't' , 'u');
    s2.Display();
    return 0;
}