#include <iostream>
using namespace std;

 float moneyreci(int currentmoney, float interest = 1.04) // default argument should be declare at last
{
    return currentmoney*interest;
}
int main()
{
    int money = 100000;
    cout << "If you have " << money << "Rs you will recive " << moneyreci(money) << "rs after 1 year" << endl;
    cout << "For VIP's : If you have " << money << "Rs you will recive " << moneyreci(money,1.1) << "rs after 1 year" << endl;
    return 0;
}