#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solve(int n) {
    int min_val = 7, max_val = 0;
    for (int i = 0; i < n; i++) {
        int h;
        cin >> h;
        min_val = min(min_val, h);
        max_val = max(max_val, h);
    }
  return max_val-min_val+1;
}

int main() {
   
    int t;
    cin >> t;
    while (t--) {
           int n;
    cin >> n;
       int ans= solve(n);
       cout<<ans<<endl;
    }
    return 0;
}
