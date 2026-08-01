#include <iostream>
#include <string>

using namespace std;

int solve(int a ,int b )
{
    return b-a;
   
  
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b;
        cin >> a>>b;
        cout << solve(a,b) << endl;
    }
    return 0;
}
