#include <iostream>
using namespace std;
int main()
{
    // What is arrays
    // array is an fixed_sized sequential collection of element of same type
    // it consist of contigenious memory location
             //   0123456
    char arr[] = "Saharsh" ;
    cout << arr << endl;

    int mat[2][2] = {1,2,3,4}, x, y;
    for ( x = 0;x<2; x++)
    {
        for (y = 0;y<2; y++)
        {
            cout << mat[x][y] << "   " ;
        }
        cout << endl;
        if(mat[x][y] == '\0')
            break;
    }
    
    return 0;
}