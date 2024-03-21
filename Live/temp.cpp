#include <bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define loop(n) for(ll i=0;i<n;i++)
#define ll long long int

// typedef long long ll;



int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;

        set<string>st;
        st.insert(s);
        st.insert(s);

        for(int i = 0; i<s.length() - 2; i++){
            string t = s;
            swap(t[i], t[i+2]);
            st.insert(t);
        }

        cout<<st.size() - 1<<endl;
                
    }
    return 0;
}

