#include <bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define loop(n) for(ll i=0;i<n;i++)
#define ll long long int

// typedef long long ll;

int main()
{
    fastio();

    int n ; cin >> n ;
    int count=0;
    while(n>0)
    {
        count++;
        if(count%2==0) // Ehab's turn
        {
            if(n%2==0)
                n=1;
            else
                n=0;
        }
        else // Mahmoud's turn
        {
            if(n%2==0)
                n=0;
            else
                n=1;
        }
    }
    if(count%2==0)
        cout << "Ehab" << endl;
    else
        cout << "Mahmoud" << endl;

    return 0;
}
