#include <bits/stdc++.h>

using namespace std;

string solve(int n, vector<int>& a) {
    bool odd_parity = (a[0] % 2 != 0);
    bool even_parity = (a[1] % 2 != 0);
    
    for (int i = 0; i < n; i += 2) {
        if ((a[i] % 2 != 0) != odd_parity) {
            return "NO";
        }
    }
    
    for (int i = 1; i < n; i += 2) {
        if ((a[i] % 2 != 0) != even_parity) {
            return "NO";
        }
    }
    
    return "YES";
}

int main() {;
    
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