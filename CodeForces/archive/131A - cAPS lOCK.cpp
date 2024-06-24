#include <bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define loop(n) for(ll i=0;i<n;i++)
#define ll long long int

// typedef long long ll;

void checkCap(string &str)
{
    string strOriginal = str;

    bool afterCap = 1;

    for(int i=1; i<str.size(); i++)
    {
        if(str[i] >= 'a' && str[i] <='z')
        {
            afterCap=0;
            break;
        }
        else
            str[i] = str[i] + 32;
    }

    if(afterCap == 0)
    {
        cout << strOriginal << endl;
    }
    else
    {
        if(str[0]>='a' && str[0] <= 'z')
        {
            str[0] = str[0] - 32;
            cout << str << endl;
        }
        else
        {
            str[0] = str[0] + 32;
            cout << str << endl;
        }
    }
}

int main()
{
    fastio();

    string str ; cin >> str;
    checkCap(str);


    return 0;
}
