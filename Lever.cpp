#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector<int>& a, vector<int>& b) {
    int ans = 0;
    while (true) {
        int i1 = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) {
                i1 = i;
                break;
            }
        }
        
        if (i1 == -1) break;
        
        ans++;
        a[i1]--;
        
        int i2 = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] < b[i]) {
                i2 = i;
                break;
            }
        }
        
        if (i2 != -1) {
            a[i2]++;
        }
    }
    return ans;
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            
            vector<int> a(n), b(n);
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }
            for (int i = 0; i < n; i++) {
                cin >> b[i];
            }
            
            cout << solve(n, a, b) << "\n";
        }
    }
    
    return 0;
}