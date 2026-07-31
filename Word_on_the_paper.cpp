#include <iostream>
#include <string>
#include<vector>

using namespace std;

string solve(vector<vector<char>> matrix)
{
    int col=-1;
    int row=-1;
    string s ="";
    int r=matrix.size();
    int c= matrix[0].size();
    for(int i =0;i<r;i++){
        for(int j =0;j<c;j++){
            if(matrix[i][j]!= '.'){
             s.push_back(matrix[i][j]);
             col=j;
             row=i;
            }
        }
    }
  return s;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 8, m = 8; 
    
        vector<vector<char>> matrix; 

        for (int i = 0; i < n; ++i) {
            vector<char> row;
            for (int j = 0; j < m; ++j) {
                char val;
                cin >> val;
                row.push_back(val);
            }
            matrix.push_back(row);
        }
    
        cout << solve(matrix)<<endl;
    } 
    
    return 0;
}
