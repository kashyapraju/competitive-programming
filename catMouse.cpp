#include <bits\stdc++.h>
using namespace std;

int main()
{
    int a, b, c, q, d, e;
    cin >> q;
    while (q--)
    {
        cin >> a >> b >> c;
        d = abs(c - a);
        e = abs(c - b);
       // cout << d << e << endl;
    

    if (d > e)
    {
        cout << "CatB" << endl;
    }
    else if(d==e)
    {
        cout<<"Mouse c"<<endl;
    }
    else
    {
        cout << "CatA" << endl;
    }
}

    return 0;
}