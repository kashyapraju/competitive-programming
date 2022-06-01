#include <bits\stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, e, f;
    cout << "Enter the value of day,mounth and year first for return and then for due" << endl;
    cin >> a >> b >> c >> d >> e >> f;
while(a>d){
    if (b == e && c == f)
    {
        cout<<15*(a-d)<<endl;
    }
    else if(a==d && c==f)
    {
        cout<<500*(b-e)<<endl;
    }
    else if(a==d && b==e)
    {
        cout<<abs(1000*(c-f))<<endl;
    }
    else 
    {
        cout<<"0"<<endl;
    }
}
cout<<"0"<<endl;

        return 0;
}


// int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
//     while(d1>d2){
//  if (m1 == m2 && y1 == y2)
//     {
//         return (abs(15*(d1-d2)));
//     }
//     else if(d1==d2 && y1==y2)
//     {
//         return (abs(500*(m1-m2)));
//     }
//     else if(d1==d2 && m1==m2)
//     {
//         return (abs(1000*(y1-y2)));
//     }
//     else 
//     {
//         return 0;
//     }
    
//     }
//     return 0;
    
// }