#include <bits/stdc++.h>

using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define loop(n) for (ll i = 0; i < n; i++)
#define ll long long int

// typedef long long ll;

int main()
{
    fastio();

    int n, m;
    cin >> n >> m;
    int count=0;
    
    if(m==n)
        cout << 0 << endl;
    else if (m%n !=0)
        cout << -1 << endl;
    else
    {
        m=m/n;
        while(m%2==0)
        {
            count++;
            m=m/2;
        }
        while(m%3==0)
        {
            count++;
            m=m/3;
        }
        if(m==1)
            cout << count << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
