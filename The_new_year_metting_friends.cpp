#include <iostream>
#include <string>

using namespace std;

int solve(int a , int b ,int c)
{
 int maxi = max(a, max(b, c));
    int mini = min(a, min(b, c));
return maxi-mini;
}

int main()
{

    int a,b,c;
    cin >> a>>b>>c;
    cout << solve(a,b,c) << endl;
    return 0;
}
