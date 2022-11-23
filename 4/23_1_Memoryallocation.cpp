#include <iostream>
using namespace std;

class shop
{
    int itemID[100];
    int itemprice[100];
    int counter;

public:
    void initconunter(void)
    {
        counter = 0;
    }
    void getprice(void);
    void display_price(void);
};

void shop ::getprice()
{
    cout << "Enter Id of your item no. " << counter + 1 << " :";
    cin >> itemID[counter];
    cout << "Enter price of your item :";
    cin >> itemprice[counter];
    counter++;
}

void shop ::display_price()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with ID :" << itemID[i] << " is $" << itemprice[i] << endl;
    }
}
int main()
{
    shop setwetgel;
    setwetgel.initconunter();
    setwetgel.getprice();
    setwetgel.getprice();
    setwetgel.getprice();
    setwetgel.display_price();
    return 0;
}