#include <iostream>
using namespace std;

 /*                    eg: (a)
                         A           
                         |
                 ----------------
                 |               |  
    inherite     B  (a)          C   (a)    
                 |               |  
                 ----------------
                         |
                         D  (a)  // but a is duplicate as well as Ambiginous bcz 'a' is Coming from B and C  to D 
so to resolve it 'Virtual Base Class is cretated
*/
class A
{
public:
    void hello(){
        cout << "hello World!!" << endl;
    }
};
class B: virtual public A    
{
public:
};
class C: virtual public A
{
public:
};
class D: public B , public C
{
public:
};

int main()
{
    D d1;
    d1.hello();
    return 0;
}