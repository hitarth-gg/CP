// #include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    // (n,m)

    int n;
    int m;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        if(i%2 != 0)
        {
            for(int j=1; j<=m; j++)
                cout << "#";
            cout << endl;
        }
        else if (i%4 == 0)
        {
            cout << "#";
            for(int j=1; j<=m-1; j++)
                cout << ".";
            cout << endl;
        }
        else
        {
            for(int j=1; j<=m-1; j++)
                cout << ".";
            cout << "#";
            cout << endl;
        }

    }

    return 0;
}
