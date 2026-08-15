#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


void solve(long long a, long long b, long long c) {
    
    vector<long long> nums = {a, b, c};
    sort(nums.begin(), nums.end());
    
    
    long long ans = min(nums[2] - nums[0], nums[1]);
    
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        
        cin >> a >> b >> c;
        
        
        solve(a, b, c);
    }
    
    return 0;
}
