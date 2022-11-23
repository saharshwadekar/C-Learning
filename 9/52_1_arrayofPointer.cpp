#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;
public:
    void setData(int a, int b)
    {
        id = a;
        price = b;
    }
    void getData(void){
        cout << "\tcode  : " << id << endl;
        cout << "\tprice : " << price << "$" << endl;
    }
};  

int main()
{
    int size = 3;
    /*
    Mall:
    1.general store item
    2.veggies item
    3.hardware item
    */
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;
    int p , q , i;
    for(i = 0; i < size; i++)
    {
        cout << "Enter the id and price of item " << i+1 << " :"<< endl;
        cin >> p >> q;

        // (*ptr).setData(p,q);
        ptr->setData(p,q);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        cout << "Item Number :"<<i+1<< endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    
    return 0;
}