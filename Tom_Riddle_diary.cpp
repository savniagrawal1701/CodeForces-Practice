#include <bits/stdc++.h>

using namespace std;

vector<string> solve(int n, vector<string>& names) {
    unordered_set<string> seen;
    vector<string> ans(n);
    
    for (int i = 0; i < n; i++) {
        if (seen.count(names[i])) {
            ans[i] = "YES";
        } else {
            ans[i] = "NO";
            seen.insert(names[i]);
        }
    }
    
    return ans;
}

int main() {
    int n;
    if (cin >> n) {
        vector<string> names(n);
        for (int i = 0; i < n; i++) {
            cin >> names[i];
        }
        
        vector<string> ans = solve(n, names);
        for (int i = 0; i < n; i++) {
            cout << ans[i] << endl;
        }
    }
    
    return 0;
}