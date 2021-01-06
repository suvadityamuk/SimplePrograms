#include <iostream>
#include <vector>
#include <string>
using namespace std;
char decode(int ar[])
{
    switch(ar[0])
    {
        case 0:
        {
            switch(ar[1])
            {
                case 0:
                {
                    switch(ar[2])
                    {
                        case 0:
                        {
                            switch(ar[3])
                            {
                                case 0:
                                {
                                    return 'a';
                                }
                                break;
                                case 1:
                                {
                                    return 'b';
                                }
                                break;
                            }
                        }
                        break;
                        case 1:
                        {
                            switch(ar[3])
                            {
                                case 0:
                                {
                                    return 'c';
                                }
                                break;
                                case 1:
                                {
                                    return 'd';
                                }
                                break;
                            }
                        }
                        break;
                    }
                }
                break;
                case 1:
                {
                    switch(ar[2])
                    {
                        case 0:
                        {
                            switch(ar[3])
                            {
                                case 0:
                                {
                                    return 'e';
                                }
                                break;
                                case 1:
                                {
                                    return 'f';
                                }
                                break;
                            }
                        }
                        break;
                        case 1:
                        {
                            switch(ar[3])
                            {
                                case 0:
                                {
                                    return 'g';
                                }
                                break;
                                case 1:
                                {
                                    return 'h';
                                }
                                break;
                            }
                        }
                        break;
                    }
                }
                break;
            }
        }
        break;
        case 1:
        {
            switch(ar[1])
            {
                case 0:
                {
                    switch(ar[2])
                    {
                        case 0:
                        {
                            switch(ar[3])
                            {
                                case 0:
                                {
                                    return 'i';
                                }
                                break;
                                case 1:
                                {
                                    return 'j';
                                }
                                break;
                            }
                        }
                        break;
                        case 1:
                        {
                            switch(ar[3])
                            {
                                case 0:
                                {
                                    return 'k';

                                }
                                break;
                                case 1:
                                {
                                    return 'l';
                                }
                                break;
                            }
                        }
                        break;
                    }
                }
                break;
                case 1:
                {
                    switch(ar[2])
                    {
                        case 0:
                        {
                            switch(ar[3])
                            {
                                case 0:
                                {
                                    return 'm';
                                }
                                break;
                                case 1:
                                {
                                    return 'n';
                                }
                                break;
                            }
                        }
                        break;
                        case 1:
                        {
                            switch(ar[3])
                            {
                                case 0:
                                {
                                    return 'o';
                                }
                                break;
                                case 1:
                                {
                                    return 'p';
                                }
                                break;
                            }
                        }
                        break;
                    }
                }
                break;
            }
        }
        break;
    }
    return 'k';
}
int main() 
{
    int testcases = 0;
    int i = 0;
    cin>>testcases;
    vector<string> res;
    int arr[4];
    while(i<testcases)
    {
        int len = 0;
        int c = 0;
        string bits = "";
        string result = "";
        cin>>len;
        cin>>bits;
        for(int j = 0; j<len; j++)
        {
            arr[c] = (int)(bits.at(j)-48);
            c++;
            if((j+1)%4==0)
            {
                result = result + decode(arr);
                c = 0;
            }
        }
        res.push_back(result);
        i++;
    }
    for(auto i = res.begin(); i!=res.end(); ++i)
    {
        cout<<*i<<endl;
    }
	return 0;
}