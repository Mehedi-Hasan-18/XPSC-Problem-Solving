#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string s1, s2;
    
    cin >> s1 >> s2;
    
    int ps1 = 0;
    int ps2 = 0;
    int empty = 0;
    
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] == '+') {
            ps1++;
        }
        if (s2[i] == '+') {
            ps2++;
        }
        if (s2[i] == '?') {
            empty++;
        }
    }
    
    int counter = 0;
    for (int i = 0; i < (1 << empty); i++) {
        if (__builtin_popcount(i) + ps2 == ps1) {
            counter++;
        }
    }
    
    // Calculate the result
    double result = (double)counter / (1 << empty);
    
    // Print the result with printf
    printf("%.9f\n", result);
    
    // Alternatively, print with cout (but won't auto-format precision to 9)
    // cout << result << endl;

    return 0;
}
