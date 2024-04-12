#include <iostream>
#include <vector>
#include <algorithm>

const int MOD = 998244353;

void mainFunction() {
    int t;
    std::cin >> t;
    for (int k = 0; k < t; ++k) {
        int s;
        std::cin >> s;
        std::vector<int> m(s);
        for (int i = 0; i < s; ++i) {
            std::cin >> m[i];
        }
        std::vector<int> s_sorted = m;
        std::sort(s_sorted.begin(), s_sorted.end());
        if (m == s_sorted) {
            std::cout << "YES" << std::endl;
            continue;
        }
        std::vector<int> v;
        int maxi = m[0];
        int inc = 0;
        for (int i = 1; i < s; ++i) {
            maxi = std::max(m[i], maxi);
            if (m[i] < maxi) {
                v.push_back(i);
                inc = std::max(inc, maxi - m[i]);
            }
        }
        bool f = true;
        for (int i = 1; i < v.size(); ++i) {
            if (v[i] == v[i - 1] + 1) {
                f = false;
                break;
            }
        }
        for (int it : v) {
            m[it] = m[it] + inc;
        }
        s_sorted = m;
        std::sort(s_sorted.begin(), s_sorted.end());
        if (m == s_sorted && f) {
            std::cout << "yes" << std::endl;
        } else {
            std::cout << "no" << std::endl;
        }
    }
}

int main() {
    mainFunction();
    return 0;
}
