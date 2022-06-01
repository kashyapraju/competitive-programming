#include <iostream>
using namespace std;

int main()
{
    int raw;
    cin >> raw;
    int count=1;
    for (int i = 1; i <= raw; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count<<" ";
            count++;
        }
        cout << endl;
    }
    return 0;
}