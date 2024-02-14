// https://www.codechef.com/problems/S100

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

    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        string str;
        cin >> str;

        int pos = 0;
        while(str[pos]!='1'){
            pos++;
        }

        for (int i = size - 3; i >= pos; i--)
        {
                str[i]='1';
                str[i+1]='0';
                str[i+2]='0';
        }
        cout << str << endl;
    }

    return 0;
}
