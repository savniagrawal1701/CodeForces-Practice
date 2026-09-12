#include <bits/stdc++.h>

using namespace std;

bool digits(int year) {
    int a = year % 10;
    year /= 10;
    int b = year % 10;
    year /= 10;
    int c = year % 10;
    year /= 10;
    int d = year % 10;
    return (a != b && a != c && a != d && b != c && b != d && c != d);
}

int solve(int n) {
    //9012 is the max answer 
    //9000 answer is 9012 (and max n can be 9000 according to the constraints )
    for (int i = n + 1; i<=9012; i++) {
        if (digits(i)) {
            return i;
        }
    }
}

int main() {
    int n;
    cin >> n;
    cout << solve(n) << endl;
    return 0;
}