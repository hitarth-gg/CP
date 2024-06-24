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

    string s;
    cin >> s;
    string e;
    cin >> e;

    int a = stoi(s.substr(0, 2));
    int b = stoi(s.substr(3, 2));

    int x = stoi(e.substr(0, 2));
    int y = stoi(e.substr(3, 2));

    int total_mins = (x - a) * 60 + (y - b);

    total_mins = total_mins / 2;

    int mins = a*60 + b + total_mins;
    a=mins/60;
    b=mins%60;


    if(a<10)
        cout << "0";
    cout << a;
    cout << ":";
    if(b<10)
        cout << "0";
    cout << b;
    cout << endl;

    return 0;
}
