#include<iostream>
#include<cmath>
using namespace std;

class Point
{
    int x,y;
    friend int dist(Point, Point);
    public:
    Point(int a,int b)
    {
        x=a; y=b;
    }
    Point ()
    {
        x=0; y=0;
    }
    void print()
    {
        cout<<"The point is ("<<x<<", "<<y<<")"<<endl; 
    }
};
int dist(Point c1, Point c2)
{
    int t1=(c2.x - c1.x);
        t1=t1*t1;
    int t2=(c2.y - c1.y);
        t2=t2*t2;
    return sqrt(t1+t2);
}

int main()
{
    Point p(2,3);
    p.print();
    Point q(5,3);
    q.print();
    cout<<"The distance between 2 points is "<<dist(p,q)<<endl;
    Point s;
    s.print();
    return 0;
}