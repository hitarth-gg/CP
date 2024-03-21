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

    int t; cin >> t;
    while(t--)
    {
        int n ; cin >> n ;
        int arr[n];
        loop(n)
            cin >> arr[i];
        
        int count = 0;

        loop(n)
        {
            if(i==n-1 && arr[i] == i+1)
            {
                swap(arr[i-1], arr[i]);
                count++;
            }
            else if(arr[i] == i+1)
            {
                count++;
                swap(arr[i], arr[i+1]);
            }
        }
        cout << count << endl;
    }

    return 0;
}
