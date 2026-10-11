#include <bits/stdc++.h>

using namespace std;

string solve(string table,  vector<string>& hand) {
    for (int i = 0; i < hand.size(); ++i) {
        if (hand[i][0] == table[0] || hand[i][1] == table[1]) {
            return "YES";
        }
    }
    return "NO";
}

int main() {
    string table;
    if (cin >> table) {
        vector<string> hand(5);
        for (int i = 0; i < 5; ++i) {
            cin >> hand[i];
        }
        cout << solve(table, hand) <<endl;
    }
    
    return 0;
}