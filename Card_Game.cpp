#include <iostream>

using namespace std;


int checkScenario(int s1, int s2, int m1, int m2) {
    int suneet_rounds = 0;
    int slavic_rounds = 0;

    
    if (s1 > m1) suneet_rounds++;
    else if (m1 > s1) slavic_rounds++;

    
    if (s2 > m2) suneet_rounds++;
    else if (m2 > s2) slavic_rounds++;

    
    return (suneet_rounds > slavic_rounds) ? 1 : 0;
}

void solve() {
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;

    int total_wins = 0;

    
    total_wins += checkScenario(a1, a2, b1, b2); 
    total_wins += checkScenario(a1, a2, b2, b1); 
    total_wins += checkScenario(a2, a1, b1, b2); 
    total_wins += checkScenario(a2, a1, b2, b1); 

    cout << total_wins << "\n";
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
