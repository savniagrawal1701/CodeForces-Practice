#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

string chat(string S) {
    unordered_set<char> mpp;
    for(int i = 0; i < S.size(); i++) {
        mpp.insert(S[i]);
    }
    if(mpp.size() % 2 == 0) return "CHAT WITH HER!";
    else return "IGNORE HIM!";
}

int main() {
    string S;
    if (cin >> S) {
        cout << chat(S) << endl;
    }
    return 0;
}
