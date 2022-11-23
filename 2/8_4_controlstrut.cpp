#include <iostream>
using namespace std;

int main()
{
    
    int i = 0;
    // if else -- statement 
    if (i==0)
    {
        cout << "Hey!" << endl;
        i++;
    }
    switch (i)
    {
    case 1:
        cout << "Switch 1" << endl;
        break;
    
    default:
        cout << "Default" << endl;
        break;
    }
    cout << i << endl;
    
    // int n = 100;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << i+1 << endl;
    // }

    // do
    // {
    //     /* code */
    // } while (/* condition */);
    
    // while (/* condition */)
    // {
    //     /* code */
    // }
    
       
    return 0;

}