#include <bits/stdc++.h>

using namespace std;

int solve(int d1, int d2, int d3) {
    int l1 = d1 + d3 + d2;
    int l2 = 2 * d1 + 2 * d2;
    int l3 = 2 * d1 + 2 * d3;
    int l4 = 2 * d2 + 2 * d3;
    int choose = min({l1, l2, l3, l4});
    return choose;
}

int main() {
    int d1, d2, d3;
    if (cin >> d1 >> d2 >> d3) {
        cout << solve(d1, d2, d3) <<endl;
    }
    
    return 0;
}