#include<iostream>
#include<cmath>
#include<string>
#include<algorithm> 
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
    string rever = "";
};
void change::choice()
{
    cout<<"Convert Decimal to: \n 1.)Binary \n 2.)Hexadecimal \n 3.)Octal"<<endl;
    cin>>ch;
    switch(ch)
    {case 1:
    ch = 2;
    break;
    case 2:
    ch = 16;
    break;
    case 3:
    ch = 8;
    break;
    }
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
    cout<<"This is iteration count no.: "<<c<<"\t Current sum: "<<sum<<endl;
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
    reverse(res.begin(), res.end());
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
