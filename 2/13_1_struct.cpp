#include <iostream>

using namespace std;

struct employee
{
    int Id;
    char name;
    float salary;
};

int main()
{
    struct employee harry;
        harry.Id = 23421;
        harry.name = 'H';
        harry.salary = 21.65;
    struct employee carry;
        carry.Id = 432321;
        carry.name = 'c';
        carry.salary = 12;
    struct employee dude;
        dude.Id = 123;
        dude.name = 'D';
        dude.salary = 78.3;
    
    
    return 0;
}