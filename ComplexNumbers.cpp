#include<iostream>
#include<cmath>
class ComplexNumber
{
    private:
	double real,imag;
	public:
	ComplexNumber()
	{
		real=imag=0;
	}
	ComplexNumber(double r,double i)
	{
		real=r;
		imag=i;
	}
	void display()
	{
		if(imag>=0)
		{
			std::cout<<real<<"+"<<imag<<"i"<<std::endl;
		}
		else
		{
			std::cout<<real<<"-"<<abs(imag)<<"i"<<std::endl;
		}
	}
	void setreal(double r)
	{
	    real = r;
	}
	void setimag(double i)
	{
	    imag = i;
	}
	double getreal()
	{
	    return real;
	}
	double getimag()
	{
	    return imag;
	}
	ComplexNumber add(ComplexNumber c1,ComplexNumber c2)
	{
		ComplexNumber result;
		result.setreal(c1.real+c2.real);
		result.setimag(c1.imag+c2.imag);
		return result;
	}
	ComplexNumber sub(ComplexNumber c1,ComplexNumber c2)
	{
		ComplexNumber result;
		result.setreal(c1.real-c2.real);
		result.setimag(c1.imag-c2.imag);
		return result;
	}
	ComplexNumber mul(ComplexNumber c1,ComplexNumber c2)
	{
		ComplexNumber result;
		result.setreal(c1.real*c2.real - c1.imag*c2.imag);
		result.setimag(c1.real*c2.imag + c1.imag*c2.real);
		return result;
	}
	ComplexNumber divis(ComplexNumber c1,ComplexNumber c2)
	{
		ComplexNumber result;
		result.setreal(((c1.real*c2.real + c1.imag*c2.imag)/(pow(c2.real,2)+ pow(c2.imag,2))));
		result.setimag((c1.imag*c2.real - c1.real*c2.imag)/(pow(c2.real,2)+ pow(c2.imag,2)));
		return result;
	}
	ComplexNumber conjugate(ComplexNumber c1)
	{
		ComplexNumber result;
		result.setreal(c1.real);
		result.setimag(-c1.imag);
		return result;
	}
	double magnitude(ComplexNumber c1)
	{
		double result;
		result = (sqrt((c1.real*c1.real)+(c1.imag*c1.imag)));
		return result;
		
	}
	double phasorang(ComplexNumber c1)
	{
		double result;
		result = atan(c1.imag/c1.real);
		return result;
	}
};
int main()
{
    double resu = 0.0;
	ComplexNumber obj1(3,4);
	obj1.display();
	ComplexNumber obj2(10,-20);
	obj2.display();
	ComplexNumber res;
	res=res.add(obj1,obj2);
	res.display();
    res=res.sub(obj1,obj2);
    res.display();
    res=res.mul(obj1,obj2);
    res.display();
    res=res.divis(obj1,obj2);
    res.display();
    res=res.conjugate(obj1);
    res.display();    
    resu=res.magnitude(obj1);
    std::cout<<resu;
    resu=res.phasorang(obj1);
    std::cout<<resu<<"°";
}

