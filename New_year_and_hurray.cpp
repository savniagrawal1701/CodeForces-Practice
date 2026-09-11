#include <iostream>

using namespace std;

int solve(int n, int k) {
    int t = 240 - k;
    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        int req = 5 * i;
        if (t >= req) {
            t -= req;
            ans++;
        } else {
            break;
        }
    }
    return ans;
}

int main() {

    int n, k;
    cin >> n >> k;

    cout << solve(n, k) << "\n";

    return 0;
}
