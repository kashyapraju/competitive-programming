#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>a;
    //vector<int>b;

   int i,j,m,n;
   cout<<"enter the value of n "<<endl;
   cin>>n;
   for(i=1;i<=n;i++)
   {
     cin>>m;
     a.push_back(m);
   }

   for(i=1;i<n;i++)
   {
       for(j=i+1;j<=i+1;j++)
       {
           if(a[i]>a[j])
           {
                cout<<"larger value "<<endl;
           }
           else
           {
               cout<<"increasing order "<<endl;
           }
       }
   }
//    for (int i = 0; i <n; i++)
//     {
//       /* code */
//       a.pop_back();
//      // b.pop_back();
//     }



   

    return 0;
}