#include <iostream>
#include <string>

using namespace std;

string sortString(string s) {
    int count1 = 0, count2 = 0, count3 = 0;
    for (int i = 0; i < s.size(); i += 2) {
        if (s[i] == '1') count1++;
        else if (s[i] == '2') count2++;
        else if (s[i] == '3') count3++;
    }

    string newstr = "";
    for (int i = 0; i < count1; i++) newstr += "1+";
    for (int i = 0; i < count2; i++) newstr += "2+";
    for (int i = 0; i < count3; i++) newstr += "3+";

    if (!newstr.empty()) {
        newstr.pop_back();
    }

    return newstr;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (cin >> s) {
        cout << sortString(s) << "\n";
    }
    return 0;
}
