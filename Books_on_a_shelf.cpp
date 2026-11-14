#include <bits/stdc++.h>
using namespace std;

pair<int, vector<long long>> solve(int n, vector<long long>& h) {
    sort(h.begin(), h.end());
    vector<long long> res(n);
    int l = 0, r = n - 1;
    
    
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            res[l] = h[i];
            l++;
        } else {
            res[r] = h[i];
            r--;
        }
    }

    
    set<int> visible_indices;

    
    long long max_left = -1;
    for (int i = 0; i < n; i++) {
        if (res[i] > max_left) {
            visible_indices.insert(i);
            max_left = res[i];
        }
    }

    
    long long max_right = -1;
    for (int j = n - 1; j >= 0; j--) {
        if (res[j] > max_right) {
            visible_indices.insert(j);
            max_right = res[j];
        }
    }

    return {(int)visible_indices.size(), res};
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            vector<long long> h(n);
            for (int i = 0; i < n; i++) {
                cin >> h[i];
            }
            auto ans = solve(n, h);
            cout << ans.first << "\n";
            for (int i = 0; i < n; i++) {
                cout << ans.second[i] << (i == n - 1 ? "" : " ");
            }
            cout << "\n";
        }
    }
    return 0;
}
