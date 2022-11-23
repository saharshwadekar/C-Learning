#include <iostream>

using namespace std;

typedef struct employee
{
    int Id;
    char name;
    float salary;
}ep;

int main()
{
    ep harry;
        harry.Id = 23421;
        harry.name = 'H';
        harry.salary = 21.65;
    ep carry;
        carry.Id = 432321;
        carry.name = 'c';
        carry.salary = 12;
    ep dude;
        dude.Id = 123;
        dude.name = 'D';
        dude.salary = 78.3;
    

    return 0;
}