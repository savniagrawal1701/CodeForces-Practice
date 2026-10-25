#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        string s;
        cin >> s;
        
        int current = a[i];
        for (char c : s) {
            if (c == 'U') {
                current = (current - 1 + 10) % 10;
            } else {
                current = (current + 1) % 10;
            }
        }
        cout << current << (i == n - 1 ? "" : " ");
    }
    cout << endl;
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}