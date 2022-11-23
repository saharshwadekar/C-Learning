#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map <string, int> :: iterator iter;
    map <string, int> marksMap; 
    marksMap["harry"] =98;
    marksMap["jack"] =45;
    marksMap["rohan"] =3;

    // marksMap.insert( { {"kozume" ,67},{"riuke" ,90} } );
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first <<"  :" << (*iter).second << endl;
    }
    cout << "The Size is: " << marksMap.size()<< endl;
    cout << "The Max_Size is: " << marksMap.max_size()<< endl;
    cout << "The Empty_Size is: " << marksMap.empty()<< endl;
    
    cout<< endl;
    return 0;
}