#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void solve(int n, const vector<int>& a) {
    int max = 0;
    
    
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    
    
    int count_max = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == max) {
            count_max++;
        }
    }
    
    cout << count_max << "\n";
}

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        
        solve(n, a);
    }
    return 0;
}
