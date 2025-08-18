#include <iostream>
#include <vector>

using namespace std;

#define int long long
const int MOD = 1e9 + 7;

vector<int> primes;

void generatePrimes() {
    vector<int> isPrime(1e6 + 1, 1);
    isPrime[0] = isPrime[1] = 0;

    for (int i = 2; i * i <= 1e6; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= 1e6; j += i) {
                isPrime[j] = 0;
            }
        }
    }

    for (int i = 2; i <= 1e6; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
}

int modPow(int base, int exp) {
    int result = 1;
    base %= MOD;

    while (exp) {
        if (exp & 1) {
            result = (result * base) % MOD;
        }
        exp >>= 1;
        base = (base * base) % MOD;
    }

    return result;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;

    generatePrimes();

    while (testCases--) {
        int num, exclude;
        cin >> num >> exclude;

        int product = 1;

        for (int p : primes) {
            if (p > num) break;
            if (exclude % p == 0) continue;

            int count = 0;
            for (int multiple = p; multiple <= num; multiple *= p) {
                count += num / multiple;
            }

            product = (product * modPow(p, count)) % MOD;
        }

        cout << product << '\n';
    }

    return 0;
}
