#include <iostream>
#include <string>
using namespace std;

void checkGender(string s) {
    int hash[26] = {0};
    int distinctCount = 0;

    for (int i = 0; i < s.length(); i++) {
        hash[s[i] - 'a'] = 1;
    }

    for (int i = 0; i < 26; i++) {
        if (hash[i] == 1) {
            distinctCount++;
        }
    }

    if (distinctCount % 2 != 0) {
        cout << "IGNORE HIM!" << endl;
    } else {
        cout << "CHAT WITH HER!" << endl;
    }
}

int main() {
    string s;
    cin >> s;
    checkGender(s);
    return 0;
}
