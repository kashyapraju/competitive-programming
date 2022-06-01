// first positive smallest number jo array m na ho

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[n];
   // int a[n];
    cout<<"enter the value of n "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

const int N = 1e6+2;
int arr[N];
for(int i=0;i<N;i++)
{
   arr[i]=false;
}

for(int i=0;i<n;i++)
{
    if(a[i]>0)
    {
        arr[a[i]]=true;
    }
}
int ans=-1;
for(int i=1;i<N;i++)
{
    if(arr[i]==false)
    ans=i;
    break;
}

cout<<ans<<endl;


    return 0;
}