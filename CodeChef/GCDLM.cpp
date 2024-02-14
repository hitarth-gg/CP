#include <bits/stdc++.h>

using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define MOD 1000000007
#define loop(n) for (ll i = 0; i < n; i++)
#define ll long long int

int main()
{
    fastio();

    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;

            while (k-- && x != y)
            {
                int gcd2 = __gcd(x, y);

                if (x >= y)
                    x = gcd2;
                else
                    y = gcd2;
                
                int lcm2 = lcm(x,y);
                if(x>=y)
                    x=lcm2;
                else
                    y=lcm2;
            }
            cout << x+y << endl;
    }

    return 0;
}
