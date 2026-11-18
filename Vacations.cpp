#include <bits/stdc++.h>
using namespace std;

int dp[105][3]; 

int solve(int i, int n, vector<int> &arr, int last) {
    
    if (i == n) {
        return 0;
    }
    if (dp[i][last] != -1) {
        return dp[i][last];
    }

    int curr = arr[i];
    int ans = 1e9;

    
    if (curr == 0) {
        ans = 1 + solve(i + 1, n, arr, 0);
    }
    
    else if (curr == 1) {
        if (last == 1) {
            ans = 1 + solve(i + 1, n, arr, 0); 
        } else {
            ans = solve(i + 1, n, arr, 1); 
        }
    }
    
    else if (curr == 2) {
        if (last == 2) {
            ans = 1 + solve(i + 1, n, arr, 0); 
        } else {
            ans = solve(i + 1, n, arr, 2); 
        }
    }
    
    else if (curr == 3) {
        int opt1 = 1e9, opt2 = 1e9;
        
        if (last != 1) {
            opt1 = solve(i + 1, n, arr, 1); 
        }
        if (last != 2) {
            opt2 = solve(i + 1, n, arr, 2); 
        }
        ans = min(opt1, opt2);
    }
    return dp[i][last] = ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    memset(dp, -1, sizeof(dp));
    cout << solve(0, n, arr, 0) << "\n";

    return 0;
}
