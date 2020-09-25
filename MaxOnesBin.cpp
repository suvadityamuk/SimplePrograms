class Solution
{
  public:  

int findMaxConsecutiveOnes(vector<int>& v) 
{
    int maxim = 0; int c=0;
    for(int i=0; i<v.size(); i++)
    {    if(v[i]==1)
        {
            c++; goto a;
        }
     else if(v[i]==0)
     {
         maxim = max(maxim,c);
         c=0;
         goto b;
     }a: maxim = max(maxim,c); b:{}
  }return maxim;
}
};


       
        
