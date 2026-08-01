// #include <iostream>
// #include <algorithm>
// using namespace std;
// const long long INF = 1e18; 


// long long solve_recursion(long long n, long long k) {
    
//     if (n == k) return 0;
    
    
//     if (n < k) return INF;

    
//     long long left_split = n / 2;
//     long long right_split = (n + 1) / 2;

    
//     long long left_time = solve_recursion(left_split, k);
//     long long right_time = solve_recursion(right_split, k);

    
//     long long best_path = min(left_time, right_time);

    
//     if (best_path == INF) return INF;

    
//     return 1 + best_path;
// }

#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

const long long INF = 1e18; // Representation of infinity

// Step 3a: Declare the DP structure globally or pass by reference 
// Since n <= 10^9, we use a map/unordered_map instead of vector<long long> dp(n + 1, -1);
unordered_map<long long, long long> dp;

// Step 1: Express the problem in terms of state function f(n)
long long f(long long n, long long k) {
    
    // Step 2: Write down all the base cases
    if (n == k) return 0;
    if (n < k) return INF;

    // Step 3b: Check if the state has already been computed
    if (dp.find(n) != dp.end()) return dp[n];

    // Step 1b: Do all choices/explorations on that state
    long long left_split = n / 2;
    long long right_split = (n + 1) / 2;

    long long left_time = f(left_split, k);
    long long right_time = f(right_split, k);

    // Step 1c: Take the minimum/maximum/sum of all choices
    long long best_path = min(left_time, right_time);

    if (best_path == INF) {
        // Step 3c: Store the result in the DP structure before returning
        return dp[n] = INF;
    }

    // Step 3c: Store the result in the DP structure before returning
    return dp[n] = 1 + best_path;
}

void solve() {
    long long n, k;
    cin >> n >> k;

    // Clear DP table for each testcase (similar to resetting the vector inside solve)
    dp.clear();

    long long ans = f(n, k);

    if (ans >= INF) {
        cout << -1 << "\n";
    } else {
        cout << ans << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

