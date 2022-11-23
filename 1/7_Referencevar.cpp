#include <iostream>
using namespace std;

// *******************Reference Variable ********************//
int main()
{
    float x = 445; // original
    float & y = x; // nick name

    cout << x << endl;
    cout << y << endl;
    return 0;
}

// *******************TypeCasting********************//

// int main()
// {
//     float r = 4.78;
//     cout << r << endl;
//     // by type casting
//     cout << (int)r << endl;
//     cout << r << endl;
//     cout << int(r) << endl;
//     return 0;
// }