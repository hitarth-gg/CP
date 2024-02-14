// https://www.codechef.com/problems/STOCKMARKET

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
        int n; cin >> n;
        int temp; 
        priority_queue<int, vector<int>, greater<int> > pq;
        loop(n)
        {
            cin >> temp;
            pq.push(temp);
        }

            int sum =0;
        pq.pop();
        while(pq.empty() == 0)
        {
            sum += pq.top();
            pq.pop();
        }
        cout << sum << endl;
        
    }   

    return 0;
}
