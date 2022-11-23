#include <iostream>
#include <cmath>
using namespace std;

class Point
{   
    friend float DistancePoint(Point , Point );
    int x,y;
public:
    Point(int a,int b){
        x = a;
        y = b;
    }
    void displayPoint(){
        cout << "Cartesian plane (x,y) = ("<< x << ","<< y<<")"<<endl;
    }
};

float DistancePoint(Point a, Point p){
    float z = hypot((p.x - a.x),(p.y - a.y));
    return z;
}
int main()
{
    Point a(0,1) , p(3,4);
    a.displayPoint();
    p.displayPoint();

    float dis = DistancePoint(a,p);
    cout << "The Distance Between These Two Point is :"<< dis << endl;
    return 0;
}