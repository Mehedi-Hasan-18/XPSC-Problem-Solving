#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f_range for (int i = 0; i < n; i++)
#define f_reverse for (int i = n - 1; i >= 0; i--)
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int arr[n];
    int freq[200005] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mx = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++) // 3 1 7 11 9 2 12
        {
            freq[arr[i] + arr[j]]++;
            mx = max(mx, freq[arr[i] + arr[j]]);
        }
    }
    cout << mx << endl;

    return 0;
}
