#include<bits/stdc++.h>
using namespace std;

string getWinner(long long a, long long b, long long c) {
    if (a > b) {
        return "First";
    } else if (b > a) {
        return "Second";
    } else {
        return (c % 2 != 0) ? "First" : "Second";
    }
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            long long a, b, c;
            cin >> a >> b >> c;
            cout << getWinner(a, b, c) << endl;
        }
    }
    return 0;
}
