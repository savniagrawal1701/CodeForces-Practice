#include <bits/stdc++.h>

using namespace std;

string solve(int n, long long s, long long m, const vector<pair<long long, long long>>& tasks) {
    long long last = 0;
    for (int i = 0; i < n; i++) {
        if (tasks[i].first - last >= s) {
            return "YES";
        }
        last = tasks[i].second;
    }
    if (m - last >= s) {
        return "YES";
    }
    return "NO";
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            long long s, m;
            cin >> n >> s >> m;
            vector<pair<long long, long long>> tasks(n);
            for (int i = 0; i < n; i++) {
                cin >> tasks[i].first >> tasks[i].second;
            }
            cout << solve(n, s, m, tasks) << "\n";
        }
    }
    
    return 0;
}