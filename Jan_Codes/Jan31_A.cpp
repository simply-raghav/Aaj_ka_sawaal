#include<vector>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int res=-1;
        int low = 0, end=nums.size()-1;
        if(nums.size()==1){
            return 0;
        }
        if(nums[0]>nums[1]){
            return 0;
        }
        if(nums[end]>nums[end-1]){
            return end;
        }
        while(low<=end){
            int mid=(low+end)/2;
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
                return mid;
            }else if(nums[mid]<nums[mid+1]){
                low=mid+1;
            }else{
                end=mid-1;
            }
        }
        return -1;
    }
};