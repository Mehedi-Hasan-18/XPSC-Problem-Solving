#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        map<int, int> occ;

        for(int i=0;i<n;i++) occ[v[i]]++;

        int L = -1, R = -1;
        int l = -1, r;
        for(int i=0;i<n;i++)
        {
            if (occ[v[i]] < k)
                continue;
            if (l == -1)
            {
                l = v[i];
            }
            if (i == n - 1 or v[i + 1] - v[i] > 1 or occ[v[i + 1]] < k)
            {
                r = v[i];
                if (r - l >= R - L)
                {
                    R = r;
                    L = l;
                }
                l = -1, r = -1;
            }
        }
        if (L == -1)
        {
            cout << -1<<endl;
        }
        else
        {
            cout << L <<" "<<R<<endl;
        }
    }

    return 0;
}
