#include<vector>

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top=0, bottom=matrix.size()-1;
        int left=0, right=matrix[0].size()-1;
        int dir=0;
        vector<int> vec;
        while(top<=bottom && left<=right){
            if(dir==0){
                for(int i=left; i<=right; i++){
                    vec.push_back(matrix[top][i]);
                }
                dir=1;
                top++;
            }
            else if(dir==1){
                for(int i=top; i<=bottom; i++){
                    vec.push_back(matrix[i][right]);
                }
                dir=2;
                right--;
            }

            else if(dir==2){
                for(int i=right; i>=left; i--){
                    vec.push_back(matrix[bottom][i]);
                }
                dir=3;
                bottom--;
            }
            else if(dir==3){
                for(int i=bottom; i>=top; i--){
                    vec.push_back(matrix[i][left]);
                }
                dir=0;
                left++;
            }

        }
        return vec;
    }
};