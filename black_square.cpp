#include <iostream>
#include <string>

using namespace std;

int calories(string word, int a, int b, int c, int d) {
    int count = 0;
    for(size_t i = 0; i < word.size(); i++){

        if (word[i] == '1'){
            count = count + a;
        }
        else if (word[i] == '2'){
            count = count + b;
        }
        else if (word[i] == '3'){
            count = count + c;
        }
        else if (word[i] == '4'){
            count = count + d;
        }
    }
    return count;
}

int main() {
    string word;
    int a, b, c, d;
    
    // Adjusted read order: first line contains a, b, c, d. Second line contains the string.
    if (cin >> a >> b >> c >> d >> word) {
        int ans = calories(word, a, b, c, d);
        cout << ans << endl;
    }
    
    return 0;
}
