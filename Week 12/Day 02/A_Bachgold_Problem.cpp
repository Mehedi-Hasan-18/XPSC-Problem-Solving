#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 == 0) {
        // Case: n is even
        cout << n / 2 << '\n'; // Maximum number of primes
        for (int i = 0; i < n / 2; i++) {
            cout << 2 << ' ';
        }
    } else {
        // Case: n is odd
        cout << (n - 3) / 2 + 1 << '\n'; // Maximum number of primes
        for (int i = 0; i < (n - 3) / 2; i++) {
            cout << 2 << ' ';
        }
        cout << 3; // Add the last prime
    }
    cout << '\n';

    return 0;
}
