#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        priority_queue<int> pq;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                if (pq.size() > 0)
                {
                    ans += pq.top();
                    pq.pop();
                }
            }
            else
            {
                pq.push(v[i]);
            }
        }
        cout << ans << endl;
    }
}
