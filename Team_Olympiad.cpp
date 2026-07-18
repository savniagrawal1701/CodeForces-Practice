#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(int n) {
    vector<int> p, m, s;
    for (int i = 1; i <= n; ++i) {
        int t;
        cin >> t;
        if (t == 1) p.push_back(i);
        else if (t == 2) m.push_back(i);
        else if (t == 3) s.push_back(i);
    }
    
    int w = min({p.size(), m.size(), s.size()});
    cout << w << "\n";
    for (int i = 0; i < w; ++i) {
        cout << p[i] << " " << m[i] << " " << s[i] << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    if (cin >> n) {
        solve(n);
    }
    
    return 0;
}
