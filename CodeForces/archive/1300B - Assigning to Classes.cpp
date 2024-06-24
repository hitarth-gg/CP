#include <bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define loop(n) for(ll i=0;i<n;i++)
#define ll long long int

// typedef long long ll;

int main()
{
    fastio();

    int t; cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int size = 2*n;
        int arr[size];

        loop(size)
            cin >> arr[i]; 

        sort(arr, arr+size);

        cout << abs(arr[size/2-1] - arr[size/2]) << endl;
        
    }

    return 0;
}
