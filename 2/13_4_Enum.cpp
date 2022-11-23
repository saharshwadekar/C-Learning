#include <iostream>
using namespace std;
int main()
{
    enum meal{ breakfast, lunch, dinner}; // ordered sequence get stored

    cout << breakfast << endl;  // 0
    cout << lunch << endl;      // 1
    cout << dinner << endl;     // 2 

    meal m1 = breakfast;
    cout << "Meal m1 " << m1 << endl ;
    return 0;
}