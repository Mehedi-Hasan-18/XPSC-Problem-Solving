#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> arr(m);
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }

    int player;
    cin >> player;

    int count = 0;

    for (int i = 0; i < m; i++) {
        int temp = player ^ arr[i];
        int temp_count = 0;

        while (temp > 0) {
            if (temp & 1) {
                temp_count++;
                if (temp_count > k) {
                    break;
                }
            }
            temp >>= 1;
        }

        if (temp_count <= k) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
