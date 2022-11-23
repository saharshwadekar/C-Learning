#include <iostream>
using namespace std;

template <class T1, class T2>

class myClass
{
public:
    T1 data1;
    T2 data2;

    myClass(T1 a, T2 ch)
    {
        data1 = a;
        data2 = ch;
    }
    void Display(void)
    {
        cout << this->data1 << "\t" << this->data2 << endl;
    }
};

int main()
{
    myClass<char, int> c1('r', 45);
    c1.Display();

    myClass<int, float> c2(2, 7.98);
    c2.Display();

    myClass<float, char> c3(4.35, 'i');
    c3.Display();
    return 0;
}