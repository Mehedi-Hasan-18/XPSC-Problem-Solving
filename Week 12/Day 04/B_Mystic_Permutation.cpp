#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n), temp(n);
        int last = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            temp[i] = arr[i];
        }
        if (n == 1)
        {
            cout << "-1\n";
            return 0;
        }
        sort(temp.begin(), temp.end());
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != temp[i])
                continue;
            if (i == n - 1 && arr[i] == temp[i])
            {
                swap(temp[n - 1], temp[n - 2]);
            }
            else if (arr[i] == temp[i])
            {
                swap(temp[i], temp[i + 1]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << temp[i] << " ";
        }
        cout << endl;
    }
    return 0;
}