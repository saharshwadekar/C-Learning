#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int year;
    float interestRate;
    float returnValue;

public:
    BankDeposit() {} // <-- necessary to have an empty constructor
    BankDeposit(int p, int y, float r); // r can be a value like 0.04
    BankDeposit(int p, int y, int r);   // r can be a value like 14
    void Show();
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    year = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + interestRate);
    }
}
BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    year = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + interestRate);
    }
}

void BankDeposit ::Show()
{
    cout << endl
         << "principal Amount was :" << principal
         << " Return value after :" << year
         << " year is :- " << returnValue << endl;
}

int main()
{
    BankDeposit b1, b2, b3;
    int p, y, R;
    float r;

    b3.Show();

    cout << "Enter the value of p y and r :";
    cin >> p >> y >> r;
    b1 =  BankDeposit(p,y,r);
    b1.Show();

    cout << "Enter the value of p y and R :";
    cin >> p >> y >> R;
    b2 =  BankDeposit(p,y,R);
    b2.Show();
    return 0;
}