#include <bits/stdc++.h>
using namespace std;

vector<int> v[100005];
int vis[100005], parent[100005], n, edges, cycle = 0, evens = 0;
int dfs(int u)
{
    vis[u] = 1;
    int cnt = 1;

    for(int i=0;i<v[u].size();i++)
    {
        int nd = v[u][i];
        if (nd == parent[u])
            continue;

        if (!vis[nd])
        {
            parent[nd] = u;
            cnt += dfs(nd);
        }
    }

    vis[u] = 2;
    if (cnt % 2 == 0)
        evens++;
    return cnt;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }

    if (n % 2 == 1)
    {
        cout << "-1" << endl;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (vis[i] == 0)
            dfs(i);
    }
    cout << evens - 1 << endl;

    return 0;
}
