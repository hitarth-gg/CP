#include <iostream>
using namespace std;

int main() {
    long long n, count = 0;
    cin >> n;
    long long position[n + 2], height[n + 1];

    for (int i = 1; i <= n; i++) {
        cin >> position[i] >> height[i];
    }

    position[0] = -1e18; 
    position[n + 1] = 1e18; 

    for (int i = 1; i <= n; i++) {
        if (position[i] - height[i] > position[i - 1]) {
            count++;
        }
        else if (position[i] + height[i] < position[i + 1]) {
            position[i] += height[i];
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
