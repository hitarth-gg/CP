// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long int n;
//     cin >> n;
//     long long int total = 0, temp;
//     for (int i =0; i<n-1; i++)
//     {
//         cin >> temp;
//         total += temp;
//     }
//     cout << n*(n+1)/2 - total;

//     return 0;
// }

/* ---------------------- using XOR ---------------------- */

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, x=0, t;
    cin >> n;
    for(int i =1 ; i<=n; i++)
        x = x^i;
    for(int i=0; i<n-1; i++)
    {
        cin >> t;
        x = x^t;
    }
    cout << x;

    return 0;
}
