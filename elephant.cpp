#include <iostream>

using namespace std;

int main()
{
    int m;
    cin >> m;
   
   int count=0;
    for (int i = 5; i >= 1; i--)
    {
         count += m / i; 
        m %= i;  
    }
    cout << count;
    return 0;
}
