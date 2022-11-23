#include <iostream>
using namespace std;

//  recursion is not recommended
int fibo(int n){
    if(n<2)
        return 1;
    return fibo(n-2) + fibo(n-1);
}


int main()
{
    int num , n;
    cout << "Enter a number ";
    cin >> num;
    n = fibo(num);
    cout << " fibonacci of " << num << " is " << n << endl;
    return 0;
}