#include <iostream>
#include <string>
using namespace std;
class point
{
    private:
    double x,y;
    public:
    point()
    {
        x=y=0;
    }
    point(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    void display()
    {
        std::cout<<"("<<x<<","<<y<<")"<<std::endl;
    }
    };
class Circle
{
    private:
    point *origin;
    double radius;
    public:
    Circle()
    {
        origin =new point();
        radius=0;
    }
    Circle(double x,double y, double r)
    {
        origin =new point(x,y);
        radius=r;
    }
    void display()
    {
        origin->display();
        std::cout<<radius<<std::endl;
    }
    
};
int main()
{
    Circle p;
    p.display();
    Circle q(10,20,30);
    q.display();
}

