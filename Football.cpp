#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    string team1 = "", team2 = "";
    int score1 = 0, score2 = 0;

    for (int i = 0; i < n; ++i) {
        string current_team;
        cin >> current_team;

        // Assign the first team name encountered
        if (team1.empty()) {
            team1 = current_team;
            score1++;
        } 
        // Increment score if it matches the first team
        else if (current_team == team1) {
            score1++;
        } 
        // Assign and count the second team name
        else {
            team2 = current_team;
            score2++;
        }
    }

    // Output the team with the higher score
    if (score1 > score2) {
        cout << team1 << "\n";
    } else {
        cout << team2 << "\n";
    }

    return 0;
}
