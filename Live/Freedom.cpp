#include <bits/stdc++.h> 
using namespace std; 
 
int main() { 
    int t; 
    cin >> t; 
    while (t--) { 
        int n; 
        cin >> n; 
        map<int,int> freq; 
        int count = 0; 
        for (int i = 0; i < n; i++) { 
            int x; 
            cin >> x; 
            if (x == 2) { 
                count += freq[6]; 
            } else if (x == 4) { 
                count += freq[4]; 
            } 
            freq[x]++; 
        } 
        cout << count << endl; 
    } 
    return 0; 
}
