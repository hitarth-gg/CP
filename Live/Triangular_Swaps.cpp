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
        string str ; cin >> str;

        set<string> st;
        st.insert(str);
     
        for(int i=0; i<n-2; i++)
        {
            string temp = str;
            swap(temp[i], temp[i+2]);
            swap(temp[i], temp[i+1]);
            st.insert(temp);
        }
        cout << st.size()-1 << endl;
    }

    return 0;
}
