#include<iostream>
#include<cmath>
double f(double x)
{
    double res = x-cos(x);
    return res;
}
double df(double x)
{
    double res = 1+sin(x);
    return res;
}
double NR(double ll)
{
    double fll = f(ll);
    double dfll = df(ll);
    double ex = ll - (fll/dfll);
    double fex = f(ex);
    std::cout<<ll<<"\t"<<fll<<"\t"<<ex<<"\t"<<fex<<std::endl;
    return ex;
}
double RF(double ll, double ul)
{
    double fll = f(ll);
    double ful = f(ul);
    double ex = ll - ((ul-ll)/(ful-fll))*fll;
    double fex = f(ex);
    std::cout<<ll<<"\t"<<fll<<"\t"<<ul<<"\t"<<ful<<"\t"<<ex<<"\t"<<fex<<std::endl;
    return ex;
}
double Bisection(double ll, double ul)
{
    double ex=(ul+ll)/2;
    std::cout<<ll<<"\t"<<f(ll)<<"\t"<<ul<<"\t"<<f(ul)<<"\t"<<ex<<"\t"<<f(ex)<<std::endl;
    return ex;
}
double Secant(double ll,double ul)
{
    
    double ex=ul-(f(ul)*(ul-ll))/(f(ul)-f(ll));
    std::cout<<ll<<"\t"<<f(ll)<<"\t"<<ul<<"\t"<<f(ul)<<"\t"<<ex<<"\t"<<f(ex)<<std::endl;
    return ex;
}
int main()
{
    double ch=0,ll=0,ul=0,ac=0;
    double ex, pres;
    std::cout<<"Enter method choice: \n 1.) Regula Falsi method \n 2.) Newton-Raphson method \n 3.) Bisection method \n 4.) Secant method"<<std::endl;
    std::cin>>ch;
    if(ch == 1)
    {
        
        std::cout<<"Enter Lower Limit \n";
        std::cin>>ll;
        std::cout<<"Enter Upper Limit \n";
        std::cin>>ul;
        std::cout<<"Enter expected accuracy \n";
        std::cin>>ac;
        do
        {
            ex=RF(ll,ul);
            if (f(ex)*f(ll)>0)
            ll=ex;
            else  
            ul=ex;
		}
        while (abs(f(ex))>ac);
    }
    else if(ch == 2)
    {
        std::cout<<"Enter Lower limit \n";
        std::cin>>ll;
        std::cout<<"Enter expected accuracy \n";
        std::cin>>ac;
        do
        {
            ex=NR(ll);
            ll=ex;
        }
        while (abs(f(ex))>ac);
    }
    else if(ch == 3)
    {
        std::cout<<"Enter Lower Limit \n";
        std::cin>>ll;
        std::cout<<"Enter Upper Limit \n";
        std::cin>>ul;
        std::cout<<"Enter Accuracy \n";
        std::cin>>pres;
        do
        {
            ex=Bisection(ll,ul);
            if(f(ex)*f(ll)>0)
            {
                ll=ex;
            }
            else
            {
                ul=ex;
            }
            
        }
        while(abs(f(ex))>pres);
        
    }
    else if(ch ==4)
    {   
        std::cout<<"Enter random Lower Limit value\n"<<std::endl;
        std::cin>>ll;
        std::cout<<"Enter random Upper Limit value\n"<<std::endl;
        std::cin>>ul;
        std::cout<<"Enter acceptable error\n"<<std::endl;
        std::cin>>pres;
        do
        {
            ex=Secant(ll,ul);
            ll=ul;
            ul=ex;
        }
        while(abs(f(ex))>pres);
    }
}


