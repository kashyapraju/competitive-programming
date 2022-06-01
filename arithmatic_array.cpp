#include<bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n " << endl;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 2;
    int diff = a[1] - a[0];
    int cour=2;
    int j=2;

    while(j<n)
    {
        if(diff==a[j]-a[j-1])
        {
            cour++;
        }
        else
        {
          diff=a[j]-a[j-1];
          cour=2;
        }
        ans=max(ans,cour);
        j++;
    }
    cout<<ans<<endl;

    return 0;
}