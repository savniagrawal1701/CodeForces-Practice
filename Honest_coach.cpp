#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector<int>& a) {
    sort(a.begin(), a.end());
    int ans = INT_MAX;
    
    for (int i = 0; i < n - 1; i++) {
        ans = min(ans, a[i+1] - a[i]);
    }
    
    return ans;
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