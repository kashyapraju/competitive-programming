#include <iostream>
using namespace std;

int main()
{
    int raw;
    cin >> raw;

    for (int i =1; i<=raw; i++)
    {
        for (int j =1; j<=i; j++)
        {
          cout<<"*";

        }
        int space= 2*raw - 2*i;

        for(int i= 1 ; i<=space; i++)
        {
            cout<<" ";
        }
         for (int j =1; j<=i; j++)
        {
          cout<<"*";

        }
        cout<<endl;
    }

     for (int i =raw; i>=1; i--)
    {
        for (int j =1; j<=i; j++)
        {
          cout<<"*";

        }
        int space= 2*raw - 2*i;

        for(int i= 1 ; i<=space; i++)
        {
            cout<<" ";
        }
         for (int j =1; j<=i; j++)
        {
          cout<<"*";

        }
        cout<<endl;
    }
     
    return 0;
}