#include <bits/stdc++.h>
using namespace std;
int main()
{

    int x, n;
    cin >> x >> n;
    while (n--)
    {
        if (x%10 == 0)
            x=x/10;
        else 
            x=x-1;
    }
    cout << x;

    return 0;
}
