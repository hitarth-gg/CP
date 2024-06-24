#include <bits/stdc++.h>

using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define MOD 1000000007
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

        int count = 0;
        int flag=0;

        for (int i = 0; i < size; i++)
        {
            if (str[i] == '.')
            {
                count++;
                flag++;
                if (flag == 3)
                {
                    count = 2;
                    break;
                }
            }
            else
                flag = 0;
        }
        cout << count << endl;
    }

    return 0;
}
