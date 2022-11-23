#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //Function object(Functor): Function wrapped in a class so that it available like an object    
    int arr[] = {1,52,76,0,15,34};
    sort(arr,arr+6);  // sort to the 5 index (6 - 1)

// for reverse
    // sort(arr,arr+6, greater<int>());
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << "  "<< endl;
    }
    
    return 0;
}