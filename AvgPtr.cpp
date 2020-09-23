#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int sum = 0;
    int n = 0;
    cout<<"Enter length of array to be defined"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter numbers to be entered into array to find their average. "<<endl;
    for(int i = 0; i < n; i++)
    cin>>a[i];
    int *ptr;
    ptr = a;
    for(int c = 0; c<n; c++)
    {
        sum += *ptr;
        ptr++;
    }
    double avg = sum/n;
    cout<<"Average = "<<avg<<setprecision(2)<<endl;
}
