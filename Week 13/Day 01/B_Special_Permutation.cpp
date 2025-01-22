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
        int n, a, b;
        cin >> n >> a >> b;
        if (a < b)
        {
            int l = n - a - 1;
            int r = b - 2;
            int x = (n / 2) - 1;
            if (l < x || r < x)
                cout << -1 << endl;
            else
            {
                vector<int> left, right;
                left.push_back(a);
                right.push_back(b);
                int i = n, count = x;
                while (count > 0)
                {
                    if (i != b)
                    {
                        left.push_back(i);
                        count--;
                    }
                    i--;
                }
                count = x, i = 1;
                while (count > 0)
                {
                    if (i != a)
                    {
                        right.push_back(i);
                        count--;
                    }
                    i++;
                }
                for (auto i : left)
                    cout << i << " ";
                for (auto i : right)
                    cout << i << " ";
                cout << endl;
            }
        }
        else if (a > b)
        {
            int l = n - a;
            int r = b - 1;
            int x = (n / 2) - 1;
            if (l < x || r < x)
                cout << -1 << endl;
            else
            {
                vector<int> left, right;
                left.push_back(a);
                right.push_back(b);
                int i = n, count = x;
                while (count > 0)
                {
                    if (i != b)
                    {
                        left.push_back(i);
                        count--;
                    }
                    i--;
                }
                count = x, i = 1;
                while (count > 0)
                {
                    if (i != a)
                    {
                        right.push_back(i);
                        count--;
                    }
                    i++;
                }
                for (auto i : left)
                    cout << i << " ";
                for (auto i : right)
                    cout << i << " ";
                cout << endl;
            }
        }
    }

    return 0;
}
