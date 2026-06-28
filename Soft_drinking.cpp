#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    if (cin >> n >> k >> l >> c >> d >> p >> nl >> np) {
        int total_drink = k * l;
        int toasts_from_drink = total_drink / nl;
        int total_limes = c * d;
        int toasts_from_salt = p / np;
        
        int max_toasts = min({toasts_from_drink, total_limes, toasts_from_salt});
        cout << max_toasts / n << endl;
    }
    return 0;
}
