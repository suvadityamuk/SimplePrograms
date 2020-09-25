class Solution {
public:
    int findNumbers(vector<int>& a) 
    {
        int dig = 0; int n=0;
        int c=0;
        for(int i = 0; i<a.size(); i++)
        {n = a[i];
            while(n>0)
            {
                n/=10;
                dig++;
            }
            if((dig%2)==0)
            {    c++;
            dig = 0;
            }
            else
                dig=0;
            
        }
        return c;
    }
};
