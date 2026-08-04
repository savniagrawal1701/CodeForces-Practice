#include <iostream>
#include <string>

using namespace std;

void solve() {
    string s;
    cin >> s;
    
    int first_zero = -1;
    int first_one = -1;
    
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '0' && first_zero == -1) first_zero = i;
        if (s[i] == '1' && first_one == -1) first_one = i;
    }
    
    string result = "";
    for (int i = 0; i < s.length(); ++i) {
        if (i != first_zero && i != first_one) {
            result += s[i];
        }
    }
    cout << result << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
