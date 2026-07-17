#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> count(n + 1, 0);
    int ans = -1;
    
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        count[val]++;

        if (count[val] >= 3) {
            ans = val;
        }
    }
    
    cout << ans << "\n";
}

int main() {
   
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
