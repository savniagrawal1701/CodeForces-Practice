#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;
    vector<int> a(n);
    int total_sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        total_sum += a[i];
    }
    sort(a.begin(), a.end());
    int my_sum = 0;
    int coin_count = 0;
    for (int i = n - 1; i >= 0; --i) {
        my_sum += a[i];
        coin_count++;
        if (my_sum > total_sum - my_sum) {
            break;
        }
    }
    cout << coin_count << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
