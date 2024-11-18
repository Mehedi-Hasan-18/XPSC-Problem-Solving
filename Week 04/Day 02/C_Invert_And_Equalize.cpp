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
        string s;
        cin >> s;
        int count_1 = 0, count_0 = 0;
        char current = s[0];
        if (current == '1')
            count_1++;
        else
            count_0++;
        for (int i = 1; i < n; i++)
        {
            if (current != s[i])
            {
                current = s[i];
                if (current == '1')
                    count_1++;
                else
                    count_0++;
            }
        }

        cout << min(count_1,count_0) << endl;
    }

    return 0;
}
