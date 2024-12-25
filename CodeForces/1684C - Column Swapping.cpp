#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
typedef long long ll;
#define pb push_back
#define ff first
#define ss second
const int N=3e5+7;
const int mod=1e9+7;
const double eps=1e-6;
const double pi=   3.14159265358979323846;
using namespace std;  
using namespace __gnu_pbds;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    op_set;

int32_t main() 
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);

   int t;
   cin >> t;
   while(t--)
   {
      int n,m;
      cin >> n >> m;

      vector<vector<int>> ar(n,vector<int>(m));
      for(int i=0;i<n;i++)
         for(int j=0;j<m;j++)
            cin >> ar[i][j];

      bool req=false;
      bool poss=true;
      vector<pair<int,int>> wrong;
      for(int i=0;i<n;i++)
      {
         vector<int> temp=ar[i];
         sort(temp.begin(),temp.end());

         int count=0;
         vector<int> need;
         for(int j=0;j<m;j++)
         {
            if(temp[j]!=ar[i][j])
            {
               need.pb(j);
               count++;
            }
         }

         if(count>2)
         {
            poss=false;
            break;
         }
         else if(count==2)
         {
            wrong.pb( {need[0],need[1]} );
            req=true;
         }
      }

      if(!poss)
            cout << -1 << "\n";
      else if(!req)
            cout << 1 << " " << 1 << "\n";
      else
      {
         bool ok=true;
         for(int i=0;i<n;i++)
         {
            vector<int> temp=ar[i];
            
            swap( temp[ wrong[0].ff ] , temp[ wrong[0].ss ] );

            if(is_sorted(temp.begin(),temp.end())==false)
                  ok=false;         
         }
         
         if(!ok)
            cout << -1 << "\n";
         else
            cout << wrong[0].ff+1 << " " << wrong[0].ss+1 << "\n";
      }
   }
}

