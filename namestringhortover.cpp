#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<"Enter string"<<endl;
    string name = "";
    cin>>name;
    for(int i = 0; i<=name.length(); i++)
    {
        cout<<name[i]<<endl;
    }
}
