#include <iostream>
#include <string>

using namespace std;

string solve(int rating)
{
   if(1600 <=rating && rating<=1899){
    return "Division 2";
   }
   else if(1400 <=rating && rating<=1599){
 return "Division 3";
   } else if (rating<=1399){
    return "Division 4";
   }else {
     return "Division 1";
   }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    int  num;
        cin >> num;
        cout << solve(num) << endl;
    }
    return 0;
}
