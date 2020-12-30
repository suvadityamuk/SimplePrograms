#include<iostream>
#include<cmath>
using namespace std;

class Point
{
    private:
    double x, y;
    public:
    void setx(double inx)
    {
        x = inx;
    }
    void sety(double iny)
    {
        y = iny;
    }
    double getx()
    {
        return x;
    }
    double gety()
    {
        return y;
    }
};
class Square
{
    public:
    Point tl, br;
    double set(double x1, double y1, double x2, double y2)
    {
        tl.setx(x1);
        br.setx(x2);
        tl.sety(y1);
        tl.sety(y2);
    }

    double rad()
    {
        double x1 = tl.getx();
        double x2 = br.getx();
        double y1 = tl.gety();
        double y2 = br.gety();
        double rad = (sqrt(pow((x2-x1),2)+pow((y2-y1),2))/sqrt(2))*cos(0.785398);
        return rad;
    }   
    double diff()
    {
        double pi = 3.1415926536;
        double x1 = tl.getx();
        double x2 = br.getx();
        double y1 = tl.gety();
        double y2 = br.gety();
        double rad = (sqrt(pow((x2-x1),2)+pow((y2-y1),2))/sqrt(2))*cos(0.785398);
        double sqarea = pow(x2-x1 , 2);
        double circarea = pi*pow(rad, 2);
        double differ = abs(sqarea-circarea);
        return differ;
    }
};
int main()  //Made by Suvaditya Mukherjee(I031)
{
    double x1, y1, x2, y2;
    cout<<"Enter Co-ordinates with first x and then y for Top Left point of the Square"<<endl;
    cin>>x1>>y1;
    cout<<"Enter Co-ordinates with first x and then y for Bottom Right point of the Square"<<endl;
    cin>>x2>>y2;
    Square sq;
    sq.set(x1, y1, x2, y2);
    double radius = sq.rad();
    double difference = sq.diff();
    cout<<"Radius of Inscribed Circle = "<<radius<<endl;
    cout<<"Difference of areas = "<<difference<<endl;  
    return 0;
}