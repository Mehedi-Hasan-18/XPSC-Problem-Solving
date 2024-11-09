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
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> teacher;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            teacher.push_back(x);
        }
        sort(teacher.begin(), teacher.end());
        for (int i = 0; i < q; i++)
        {
            int x;
            cin >> x;
            if (x < teacher[0])
                cout << teacher[0] - 1 << endl;
            else if (x > teacher.back())
                cout << n - teacher.back() << endl;
            else
            {
                auto it = lower_bound(teacher.begin(), teacher.end(), x);
                int r = n;
                if (it != teacher.end())
                    r = *it;
                int l = 1;
                if (it != teacher.begin())
                    l = *(--it);
                cout << (r - l) / 2 << endl;
            }
        }
    }
    return 0;
}
