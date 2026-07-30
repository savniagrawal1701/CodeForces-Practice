#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;


int getsum(int n, int k, vector<int>& a, vector<int>& b) {
    
    sort(a.begin(), a.end());
    
    sort(b.begin(), b.end(), greater<int>());
    
    
    for (int i = 0; i < k; ++i) {
        if (b[i] > a[i]) {
            swap(a[i], b[i]);
        } else {
            
            
            break;
        }
    }
    
    
    return accumulate(a.begin(), a.end(), 0);
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        vector<int> b(n);
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        
        
        int result = getsum(n, k, a, b);
        cout << result << "\n";
    }
    
    return 0;
}
