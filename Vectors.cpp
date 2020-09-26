#include<iostream>
#include<cmath>
using namespace std;
class Vector3d
{
    public:
    double i,j,k;
    Vector3d();
    Vector3d(double, double, double);
    void seti(double);
    void setj(double);
    void setk(double);
    double geti();
    double getj();
    double getk();
    void disp()
    {
        cout<<"Entered vectors are : "<<i<<"i + "<<j<<"j + "<<k<<"k"<<endl;
    }
    double dotProduct(Vector3d, Vector3d);
    Vector3d crossProduct(Vector3d, Vector3d);
    Vector3d add(Vector3d, Vector3d);
    Vector3d sub(Vector3d, Vector3d);
};
Vector3d::Vector3d()
{
    i=j=k=0;
}
Vector3d::Vector3d(double a, double b, double c)
{
    i = a;
    j = b;
    k = c;
}
void Vector3d::seti(double a)
{
    i = a;
}
void Vector3d::setj(double b)
{
    j = b;
}
void Vector3d::setk(double c)
{
    k = c;
}
double Vector3d::geti()
{
    return i;
}
double Vector3d::getj()
{
    return j;
}
double Vector3d::getk()
{
    return k;
}
double Vector3d::dotProduct(Vector3d a, Vector3d b)
{
    double dp = (a.i*b.i)+(a.j*b.j)+(a.k*b.k);
    return dp;
}
Vector3d Vector3d :: crossProduct(Vector3d a, Vector3d b)
{
    Vector3d res;
    double ires = ((a.j*b.k)-(b.j*a.k));
    double jres = -((a.i*b.k)-(b.i*a.k));
    double kres = ((a.i*b.j)-(b.i*a.j));
    res.seti(ires);
    res.setj(jres);
    res.setk(kres);
    return res;
}
Vector3d Vector3d :: add(Vector3d a, Vector3d b)
{
    Vector3d sum;
    double ires = (a.i + b.i);
    double jres = (a.j + b.j);
    double kres = (a.k + b.k);
    sum.seti(ires);
    sum.setj(jres);
    sum.setk(kres);
    return sum;
}
Vector3d Vector3d :: sub(Vector3d a, Vector3d b)
{
    Vector3d diff;
    double ires = (a.i + b.i);
    double jres = (a.j + b.j);
    double kres = (a.k + b.k);
    diff.seti(ires);
    diff.setj(jres);
    diff.setk(kres);
    return diff;
}
int main()
{
    
    int ch; double x,y,z,a,b,c;
    cout<<"Enter first vector"<<endl;
    cin>>x>>y>>z;
    cout<<"Enter second vector"<<endl;
    cin>>a>>b>>c;
    Vector3d v1(x,y,z);
    Vector3d v2(a,b,c);
    a:
    cout<<"Enter operation \n1.)Dot Product \n2.)Cross Product \n3.)Add \n4.)Subtract\n";
    cin>>ch;
    switch(ch)
    {
        case 1:
        {
            v1.disp();
            v2.disp();
            double dotp = v1.dotProduct(v1,v2);
            cout<<"Dot Product of vectors is = ("<<dotp<<")"<<endl;            
        }break;
        case 2:
        {
            v1.disp();
            v2.disp();
            Vector3d re;
            re = re.crossProduct(v1, v2);
            cout<<"Resultant vector is = ("<<re.geti()<<"i) + ("<<re.getj()<<"j) + ("<<re.getk()<<"k)"<<endl;
        }break;
        case 3:
        {
            v1.disp();
            v2.disp();
            Vector3d re;
            re = re.add(v1,v2);
            cout<<"Resultant vector is = ("<<re.geti()<<"i) + ("<<re.getj()<<"j) + ("<<re.getk()<<"k)"<<endl;

        }break;
        case 4:
        {
            v1.disp();
            v2.disp();
            Vector3d re;
            re = re.sub(v1,v2);
            cout<<"Resultant vector is = ("<<re.geti()<<"i) + ("<<re.getj()<<"j) + ("<<re.getk()<<"k)"<<endl;

        }break;
        default:
        {
            cout<<"Wrong input, please try again"<<endl;
            goto a;
            

        }
    }return 0;
}
