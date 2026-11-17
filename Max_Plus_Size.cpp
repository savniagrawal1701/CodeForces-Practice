#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxPlusSize(const vector<int>& a) {
    int n = a.size();
    
    int max_even = 0, cnt_even = 0;
    for (int i = 0; i < n; i += 2) {
        max_even = max(max_even, a[i]);
        cnt_even++;
    }
    
    int max_odd = 0, cnt_odd = 0;
    for (int i = 1; i < n; i += 2) {
        max_odd = max(max_odd, a[i]);
        cnt_odd++;
    }
    
    return max(max_even + cnt_even, max_odd + cnt_odd);
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            vector<int> a(n);
            for (int i = 0; i < n; ++i) {
                cin >> a[i];
            }
            
            cout << maxPlusSize(a) << "\n";
        }
    }
    
    return 0;
}
