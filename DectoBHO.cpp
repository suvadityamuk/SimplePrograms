#include<iostream>
#include<cmath>
#include<string>
using namespace std;
class change
{
    int ch, n;
    public:
    change()
    {
        ch=0;
        n=0;
    }
    void choice();
    void calc();
    void hex(int d);
    string res = "";
};
void change::choice()
{
    cout<<"Convert Decimal to: \n 1.)Binary(Please Enter 2) \n 2.)Hexadecimal(Please Enter 16) \n 3.)Octal(Please Enter 8)"<<endl;
    cin>>ch;
    cout<<"Enter number to convert"<<endl;
    cin>>n;
}
void change::calc()
{
    int d = 0; int x = ch; int sum = 0; int c = 0;
    if(x == 2 || x == 8)
    {while(n>=1)
    {
    d = n%x;
    sum += d*(pow(10,c));
    n /= x;
    c++;
    cout<<"This is iteration count no.: "<<c<<"Current sum: "<<sum<<endl;
    }
    cout<<"Result = "<<sum<<endl;
    }
    else if(x==16)
    {
    while(n>=1)
    {d = n%x;
    if(d>9)
     hex(d);
    else
     res= res + to_string(d) ;
     n /= x;
    }
    
    cout<<"Result : "<<res<<endl;
    }
}
void change::hex(int d)
{
    if(d==10)
    {
    res = res+"A";
    }
    else if(d==11)
    {
    res = res+"B";
   }
    else if(d==12)
    {
    res = res+"C";
    }
    else if(d==13)
    {
    res = res+"D";
    }
    else if(d==14)
    {
    res = res+"E";
    }
    else if(d==15)
    {
    res = res+"F";
    }
}
int main()
{
    start:
    change p;
    p.choice();
    p.calc();
    char f;
    cout<<"Do you want to convert again? \n [y/n]"<<endl;
    cin>>f;
    if(f=='y')
    goto start;
    else if(f=='n')
    return(0);
}
