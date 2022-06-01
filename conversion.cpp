// binary to decimal

#include <bits/stdc++.h>
using namespace std;

int hexadecimaltodecimal(string n)
{
    int ans = 0;
    int x = 1;

    int s = n.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans = x * (n[i] - '0');
        }

        else if (n[i] >= 'A' && n[i] >= 'f')
        {
            ans *= x * (n[i] - 'A' + 10);
        }
        x*=16;
    }
    return ans;

}

int binarytodecimal(int n)
{
    int ans = 0;
    int x = 1;

    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 2;
        n /= 10;
    }
    return ans;
}

int octatedecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 8;
        n /= 10;
    }
    return ans;
}

int main()
{
    string n;
    cin >> n;

   // int n;
   // cin >> n;
   // cout << binarytodecimal(n) << endl;
   // cout << octatedecimal() << endl;
  cout << hexadecimaltodecimal(n);
    return 0;
}
