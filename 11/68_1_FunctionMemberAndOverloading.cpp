#include <iostream>
using namespace std;


template <class T>
class saharsh
{
public:
    T data;
    saharsh(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void saharsh <T> :: display(){
    cout << "Data = " << data << endl;
}

void func(int a)
{
    cout << "function int a : "<< a << endl;
}
template <class T>
void func(T a)
{
    cout << "Template function a : "<< a << endl;
}


int main()
{
    saharsh <int> s(34);
    cout << s.data << endl;
    s.display();

    func(34);
    func<int>(34);
    func('r');
    func<char>('r');
    func(34.54);
    return 0;
}