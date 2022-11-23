#include <iostream>
#include <vector>

using namespace std;

template <class T>
void Display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "  ";
    }
    cout << endl;
}

template <class T>
void set_vector(vector<T> &v1,int Size)
{
    T element;
    for (int i = 0; i < Size; i++)
    {
        cout << "Enter the element to this vector ";
        cin >> element;
        v1.push_back(element);
    }
}

int main()
{
    vector <int> vec1;
    int Size;
    cout << "Enter the Size of a Vector :";
    cin >> Size;
    set_vector(vec1, Size);
    Display(vec1);
    // vec1.pop_back();
    // Display(vec1);

    vector <int> :: iterator iter = vec1.begin();
    // vec1.insert(iter, 566);
    // vec1.insert(iter+1, 566);
    vec1.insert(iter+2,500, 566);
    Display(vec1);

    return 0;
}