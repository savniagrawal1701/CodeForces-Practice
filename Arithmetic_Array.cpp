#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector<int>& a) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    
    if (sum == n) {
        return 0;
    } else if (sum < n) {
        return 1;
    } else {
        return sum - n;
    }
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