
#include <iostream>
#include <unordered_set> 
 
using namespace std;
 
int horseshoesToBuy(int s1, int s2, int s3, int s4) {
    unordered_set<int> unique_colors;
    
    unique_colors.insert(s1);
    unique_colors.insert(s2);
    unique_colors.insert(s3);
    unique_colors.insert(s4);
    
    int unique_count = unique_colors.size();
    
    return 4 - unique_count;
}
 
int main() {
    int s1, s2, s3, s4;
    
    cin >> s1 >> s2 >> s3 >> s4;
    
    cout << horseshoesToBuy(s1, s2, s3, s4) << endl;
    
    return 0;
}
