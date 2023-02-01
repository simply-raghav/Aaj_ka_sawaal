#include<vector>
#include<valarray>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0, mid=0,last=nums.size()-1;
        while(mid<=last){
            if(nums[mid]==0){
                swap(nums[low], nums[mid]);
                low++; mid++;
            }else if(nums[mid]==1){
                mid++;
            }else{
                swap(nums[mid], nums[last]);
                last--;
            }
        }
    }
};