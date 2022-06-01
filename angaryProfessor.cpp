#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, t;
    // cout<<"enter n and k "<<endl;
    // cin>>n>>k;
    cin >> t;
    //int a[n];
    while (t--)
    {

        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int p = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= 0)
                p = p + 1;
        }
        //cout << p << endl;

        if (k <= p)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}