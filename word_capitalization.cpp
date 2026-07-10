#include <iostream>
#include <string>
#include <cctype>

using namespace std;


string capitalizeWord(string str) {
    if (!str.empty()) {
        str[0] = toupper(str[0]);
    }
    return str;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string word;
    if (cin >> word) {
        cout << capitalizeWord(word) << "\n";
    }

    return 0;
}
