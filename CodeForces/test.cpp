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

    map<int, string> m;
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";
    
    auto it = m.find(5); // returns iterator to the element if found else returns m.end()
    // time complexity of find is O(log n)

    if(it != m.end())
        cout << "Found " << it->second << endl;
    else
        cout << "Not Found" << endl;


    // map.erase takes as input the key of the element or the iterator to the element
    m.erase(3); // removes the element with key 3

    if(it!=m.end())
        m.erase(it); // removes the element pointed by the iterator


    return 0;
}
