#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector<int>& a) {
    int com;
    
    if (a[0] == a[1] || a[0] == a[2]) {
        com = a[0];
    } else {
        com = a[1];
    }
    
    
    for (int i = 0; i < n; ++i) {
        if (a[i] != com) {
            return i + 1; 
        }
    }
    return -1;
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            vector<int> a(n);
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }
            cout << solve(n, a) << "\n";
        }
    }
    
    return 0;
}