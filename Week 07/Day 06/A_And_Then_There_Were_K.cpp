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
        int n;
        cin >> n;
        int last_set_bit = __lg(n);
        // cout<<last_set_bit<<endl;
        cout << (1<<last_set_bit)-1<<endl;
    }

    return 0;
}
