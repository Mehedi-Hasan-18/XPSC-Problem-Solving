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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll>a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        if (n == 1)
        {
            cout << "YES\n";
            continue;
        }

        ll sum = 0;
        map<ll, int> freq;
        bool possible = true;

        for(int i=0;i<n;i++)
        {
            freq[a[i]]++;
            sum += a[i];
        }

        priority_queue<ll> pq;
        pq.push(sum);

        while (!pq.empty())
        {
            ll to_split = pq.top();
            pq.pop();

            ll x = to_split / 2;
            ll y = to_split - x;

            if (freq[x] > 0)
            {
                freq[x]--;
            }
            else if (freq[x] == 0 and x > 1)
            {
                pq.push(x);
            }

            if (freq[y] > 0)
            {
                freq[y]--;
            }
            else if (freq[y] == 0 and y > 1)
            {
                pq.push(y);
            }

            if (pq.size() > n + 2)
            {
                possible = false;
                break;
            }
        }

        for(int i=0;i<n;i++)
        {
            if (freq[a[i]] > 0)
            {
                possible = false;
                break;
            }
        }

        if(possible) cout << "YES\n";
        else cout <<"NO\n";
    }

    return 0;
}
