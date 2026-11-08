#include <iostream>

using namespace std;

long long solve(int a[], int n) {
    int m = INT_MAX;
    for (int i = 0; i < n; ++i) {
        if (a[i] < m) {
            m = a[i];
        }
    }

    long long s = 0;
    for (int i = 0; i < n; ++i) {
        s += (a[i] - m);
    }

    return s;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[50];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        long long r = solve(a, n);
        cout << r << "\n";
    }

    return 0;
}
