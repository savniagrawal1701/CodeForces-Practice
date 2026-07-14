#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    
    vector<int> freq(26, 0);

    
    for (int i = 0; i < n; ++i) {
        freq[s[i] - 'A']++; 
    }

    int count = 0;

    
    for (int i = 0; i < 26; ++i) {
        if (freq[i] == 1) {
            count = count + 2;
        } else if (freq[i] > 1) {
            count = count + freq[i] + 1;
        }
    }

    cout << count << "\n";
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
