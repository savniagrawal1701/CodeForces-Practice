#include <iostream>
#include <string>
using namespace std;
// Function to check if t is the reverse of s
bool isTranslationCorrect(const string& s, const std::string& t) {
    if (s.length() != t.length()) {
        return false;
    }
    
    int n = s.length();
    for (int i = 0; i < n; i++) {
        // Compare character from start of s with character from end of t
        if (s[i] != t[n - 1 - i]) {
            return false;
        }
    }
    
    return true;
}

int main() {

    string s, t;
    if (cin >> s >> t) {
        if (isTranslationCorrect(s, t)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
