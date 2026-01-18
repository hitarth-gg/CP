#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        int maxv = 0;
        for (int i = 0; i < n; ++i) { cin >> a[i]; maxv = max(maxv, a[i]); }
        for (int i = 0; i < n; ++i) { cin >> b[i]; maxv = max(maxv, b[i]); }

        // iterative segment tree for range maximum over value indices [1..maxv]
        int size = 1;
        while (size < maxv) size <<= 1;
        vector<int> seg(2 * size, 0);

        auto seg_update = [&](int pos, int val) {
            // pos in [1..maxv], map to index = pos-1
            int idx = (pos - 1) + size;
            seg[idx] = val;
            idx >>= 1;
            while (idx) {
                seg[idx] = max(seg[idx << 1], seg[(idx << 1) | 1]);
                idx >>= 1;
            }
        };

        auto seg_query = [&](int L, int R)->int {
            // query max on value range [L..R], 1-based inclusive
            if (L > R) return 0;
            int l = (L - 1) + size;
            int r = (R - 1) + size;
            int res = 0;
            while (l <= r) {
                if (l & 1) res = max(res, seg[l++]);
                if (!(r & 1)) res = max(res, seg[r--]);
                l >>= 1; r >>= 1;
            }
            return res;
        };

        ll ans = 0;
        for (int i = 1; i <= n; ++i) {
            int ai = a[i-1];
            int bi = b[i-1];
            int Tval = max(ai, bi);
            int pos_last_ge_T = (Tval <= maxv ? seg_query(Tval, maxv) : 0);
            int pos_last_ge_a = (ai <= maxv ? seg_query(ai, maxv) : 0);
            int countA = i - pos_last_ge_a;
            ll contrib_l = pos_last_ge_T + (bi == ai ? countA : 0);
            ans += contrib_l * (ll)(n - i + 1);
            seg_update(ai, i); // record last position of value ai
        }

        cout << ans << '\n';
    }
    return 0;
}
