 #include <bits/stdc++.h>
 using namespace std;

 int main()
 {
//     int j, i, arr1[10000], arr2[10000], s, t, a, b, n, m,c=0,d=0,ha[100000],ho[10000];
//     //cout << "enter values of left_position(s),right_position(t),apple_tree(a),orange_tree(b)"<<endl;;
//  cin>>s>>t>>a>>b;
//     //cout << "enter number of mango" << endl;
int n,arr1[27];
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr1[i];
     }
     
    for (int i = n; i >=1; i--)
    {
        cout << arr1[i];
     }


//     //cout << "enter number of orange " << endl;
//     cin >> m;
//     for (j = 1; j <= m; j++)
//     {
//         cin >> arr2[j];
//     }
     
//      for(i=0;i<=n;i++)
//      {
//          ha[i]=a+arr1[i];
//          if(ha[i]>=s && ha[i]<=t)
//          {
//              c=c+1;
//          }
//      }
//        for(j=0;j<=m;j++)
//      {
//          ha[j]=b+arr2[j];
//          if(ha[j]>=s && ha[j]<=t)
//          {
//              d=d+1;
//          }
//      }


//      cout<<c<<endl;
//      cout<<d<<endl;


    return 0;
 }