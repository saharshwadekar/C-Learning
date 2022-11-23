#include <iostream>
using namespace std;

template <class T>
class Vector
{
    int size;
public:
    T *arr ;
    Vector(int m)
    {
        size = m;
        arr = new T [size];
    }
    T dotProduct(Vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d+= this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    // Vector v1(3);
    // v1.arr[0] = 4;
    // v1.arr[1] = 5;
    // v1.arr[2] = 3;
    // Vector v2(3);
    // v2.arr[0] = 0;
    // v2.arr[1] = 6;
    // v2.arr[2] = 2;

    // int a = v1.dotProduct(v2);
    // cout<< "the dotproduct is :" << a << endl;



    Vector <float>v1(3);
    v1.arr[0] = 4.3;
    v1.arr[1] = 5.2;
    v1.arr[2] = 3.09;
    Vector <float>v2(3);
    v2.arr[0] = 0.2;
    v2.arr[1] = 6.3;
    v2.arr[2] = 2.76;

    float a = v1.dotProduct(v2);
    cout<< "the dotproduct is :" << a << endl;

    return 0;
}