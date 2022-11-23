#include <iostream>
using namespace std;

// int fac(int n){
//     int fact = 1, i;
//     for (i = 2; i <= n ; i++)
//     {
//         fact *= i;
//     }
//     return fact;
// }

int fac(int n){  // recursion fuction
    if(n<=1)
        return 1;
    return n*fac(n-1);
}


int main()
{
    int num , x;
    cout << "Factorial of " ;
    cin >> num;
    x = fac(num);
    cout << "The factorial of " << num << " is " << x << endl;
    return 0;
}