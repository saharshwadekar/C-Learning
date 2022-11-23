#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list <int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it<<"  ";
    }
    cout << endl; 
}

int main()
{
    list < int>list1; // list of 0 length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    // list1.push_back(9);

    list<int> :: iterator iter;
    iter = list1.begin();
// Removal elements fuction
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(9);
    cout << "List 1 : ";
    display(list1);

// sorting the list

    list1.sort();
    cout << "List 1 : ";
    display(list1);



    list < int>list2(3); // Empty List of Size 7 
    // list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter ++;
    *iter = 3;
    iter ++;
    *iter = 78;
    iter ++;
    
    cout << "List 2 : ";
    display(list2);
    list1.merge(list2);
    cout << endl<< "After Merging the list "<< endl;
    cout << "List 1 : ";
    display(list1);
    cout << "After Sorting both" << endl;
    list2.sort();
    list1.merge(list2);
    cout << "List 1 : ";
    display(list1);
// reversing the list
    cout << "reversing" << endl;
    list1.reverse();

    cout << "List 1 : ";
    display(list1);
   
    return 0;
}