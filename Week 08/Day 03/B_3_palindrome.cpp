#include <iostream>
#include <string>
using namespace std;


int main() {
    int n;
    cin >> n;
    string pattern = "aabb";
    string result;

    int repeatCount = (n + 3) / 4;
    for (int i = 0; i < repeatCount; ++i) {
        result += pattern;
    }
    result = result.substr(0,n);
    cout << result << endl;

    return 0;
}
