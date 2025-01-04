#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,n;
    cin >> x >> n;
    set<int>position;
    multiset<int>length;
    position.insert(0);
    position.insert(x);
    length.insert(x-0);
    for(int i=0;i<n;i++){
        int no;cin >> no;
        position.insert(no);
        auto it = position.find(no);
        int previous = *prev(it);
        int nextValue = *next(it);
        length.erase(length.find(nextValue-previous));
        length.insert(no-previous);
        length.insert((nextValue-no));
        cout << *length.rbegin() <<" ";

    }

    
    return 0;
}
