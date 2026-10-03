#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector<long long>& a) {
    if (n == 0) return 0;
    int maxi = 1, curr = 1;
    
    for (int i = 1; i < n; ++i) {
        if (a[i] >= a[i - 1]) {
            curr++;
        } else {
            curr = 1;
        }
        maxi = max(maxi, curr);
    }
    
    return maxi;
}

int main() {
  
    int n;
    if (cin >> n) {
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << solve(n, a) << endl;
    }
    
    return 0;
}