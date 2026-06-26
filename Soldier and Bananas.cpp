#include <iostream>
#include <algorithm>

using namespace std;


long long borrow(long long k, long long n, long long w) { 
    long long sum = 0; 
    long long moneyreq = 0; 
    
    for(int i = 1; i <= w; i++) { 
        sum = sum + i; 
    } 
    
    moneyreq = sum * k; 
    
  
    if (moneyreq <= n) {
        return 0;
    }
    
    return moneyreq - n; 
}

int main() {
 
    long long k, n, w;
    

    cin >> k >> n >> w;

    cout << borrow(k, n, w) << "\n";

    return 0;
}
