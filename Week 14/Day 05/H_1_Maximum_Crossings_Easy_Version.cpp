#include <bits/stdc++.h>
#define ll long long
const int N = 1e6+5;
using namespace std;

ll inp[N];
struct Segment_Tree
{
    ll ST[N], lazy[N];
    void propagate(int SI, int b, int e)
    {
        if (lazy[SI] != 0)
        {
            ST[SI] += lazy[SI];
            if (b != e)
            {
                lazy[2 * SI] += lazy[SI];
                lazy[2 * SI + 1] += lazy[SI];
            }
            lazy[SI] = 0;
        }
        return;
    }
    void build(int SI, int b, int e)
    {
        if (b == e)
        {
            ST[SI] = 0;
            return;
        }
        int left = 2 * SI;
        int right = left + 1;
        int mid = (b + e) / 2;
        build(left, b, mid);
        build(right, mid + 1, e);
        ST[SI] = ST[left] + ST[right];
    }
    void update(int SI, int b, int e, int l, int r, int val)
    {
        if (b > r || e < l)
        {
            return;
        }
        if (b >= l && e <= r)
        {
            ST[SI] += val;
            return;
        }
        int left = 2 * SI;
        int right = left + 1;
        int mid = (b + e) / 2;
        update(left, b, mid, l, r, val);
        update(right, mid + 1, e, l, r, val);
        ST[SI] = ST[left] + ST[right];
    }
    ll query(int SI, int b, int e, int l, int r)
    {
        if (b > r || e < l)
        {
            return 0;
        }
        if (b >= l && e <= r)
        {
            return ST[SI];
        }
        int left = 2 * SI;
        int right = left + 1;
        int mid = (b + e) / 2;
        ll L = query(left, b, mid, l, r);
        ll R = query(right, mid + 1, e, l, r);
        return L + R;
    }
} STree;
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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        STree.build(1, 1, n);
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += STree.query(1, 1, n, a[i], n);
            STree.update(1, 1, n, a[i], a[i], 1);
        }

        cout << ans << endl;
    }
    return 0;
}
