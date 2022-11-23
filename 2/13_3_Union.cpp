#include <iostream>
using namespace std;

typedef union money
{
    int coin;   //4 
    char car;   // 1   only one will in use
    float pounds;//4
}mn;


int main()
{
    mn m1;
        m1.coin = 3;
        m1.car = 'm';
        m1.pounds = 23.1;
    cout<<m1.pounds<<endl;    
    return 0;
}