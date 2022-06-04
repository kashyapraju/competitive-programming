#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,m,t;
   // int count=0;
   cin>>t;
   while(t--)
   {
  int count=0;
    cin>>n;
    m=n;
    while(m>0)
    {
        d=m%10;
    
        if(m%d==0)
        {
            count=count+1;
        }
         m=m/10;
    }
    cout<<count<<endl;
   }

    return 0;

}