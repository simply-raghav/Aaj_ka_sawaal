#include<vector>

using namespace std;

class NumMatrix {
public:
    vector<vector<int>> prefix;
    NumMatrix(vector<vector<int>>& matrix) {
        prefix.resize(matrix.size(), vector<int>(matrix[0].size(),0));
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[i].size(); j++){
                if(i==0){
                    if(j==0){
                        prefix[0][0] = matrix[0][0];
                    }else
                        prefix[i][j] = prefix[i][j-1] + matrix[i][j];
                }else if(j==0){
                    prefix[i][j] =  prefix[i-1][j] + matrix[i][j];
                }else{
                    prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1] + matrix[i][j];
                }
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int ans = prefix[row2][col2];
      
      if (row1 && col1)
        ans += prefix[row1 - 1][col1 - 1];
      if (row1)
        ans -= prefix[row1 - 1][col2];
      if (col1)
        ans -= prefix[row2][col1 - 1];
      
      return ans;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */