#include <bits/stdc++.h>
using namespace std;

int large[5] = {5, 6, 7, 8, 9};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        string s = to_string(n);
        int sz = s.size();
        
        string small = "01234", large = "56789";
        if (s.find(small) != string::npos && s.find(large) != string::npos) {
            cout << "No" << endl;
            break;
        }
        
        bool flag = false;
        int sum = 0, bad_total = 5 + 6 + 7 + 8 + 9;
        for (int i = 0; i < sz - 1; i++) {
            sum += (s[i] - '0');
            if (s[i] == '0') {flag = true;}
        }
        
        if (s[sz - 1] == '9') {
            cout << "No" << endl;
        } else if (sum == bad_total) {
            cout << "No" << endl;
        } else if (s[0] != '1') {
            cout << "No" << endl;
        } else if (sz % 10 == 0) {
            cout << "No" << endl;
        } else if (flag) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }
    return 0;
}
