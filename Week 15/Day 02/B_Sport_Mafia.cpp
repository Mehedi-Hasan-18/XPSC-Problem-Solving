#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, k;
    cin >> n >> k;
    long long i = 0;
    long long j = n;
    while (i <= j)
    {
        long long a = i + (j - i) / 2;
        if ((((n - a) * (n - a + 1)) / 2) - a == k)
        {
            cout << a;
            return 0;
        }
        else if ((((n - a) * (n - a + 1)) / 2) - a < k)
        {
            j = a - 1;
        }
        else
            i = a + 1;
    }

    return 0;
}
