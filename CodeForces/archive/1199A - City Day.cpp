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

    int n , x , y; cin >> n >> x >> y;
	vector<int> v(n);
	
	for(int &m : v)
		cin >> m;
        
    loop(n)
    {
        int lowest = v[i];
        bool flag = true;

        for(int j =i+1; j<=i+y && j<n; j++)
        {
            if(v[j]<lowest)
                flag = false;
        }
        for(int j=i-1 ; j>=0 && j>=i-x; j--)
        {
            if(v[j] < lowest)
                flag = false;
        }
        if(flag)
        {
            cout << i+1 << endl;
            return 0;
        }
    }
		



    return 0;
}
