#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string t, p;
    cin >> t >> p;
    int n = t.size();
    int m = p.size();
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i]--;
    }
    //first things : OK Function for  making the choice of answer
    bool found = true;
    auto ok = [&](int midien)
    {
        vector<bool> bad(n);
        for (int i = 0; i <= midien; i++)
        {
            bad[v[i]] = true;
            // found = false;
        }
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (!bad[i] && t[i] == p[j])
            {
                j++;
            }
            if (j == m)
                return true;
        }
        return false;
    };

    //second things : Discribe the binary Search algorith ans called ok functions.
    int l = 0, r = n - 1, mid, ans=0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
            found = false;
        }
        else
            r = mid - 1;
    }
    if(found) cout << 0 <<endl;
    else cout << ans + 1 << endl;

    return 0;
}
