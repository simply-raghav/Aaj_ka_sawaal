class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0, end=nums.size()-1;
        if(target<nums[0]){
            return 0;
        }
        if(target>nums[end]){
            return end+1;
        }
        while(low<=end){
            int mid = (low+end)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                if(nums[mid-1]<target){
                    return mid;
                }else{
                    end=mid-1;
                }
            }else{
                if(nums[mid+1]>target){
                    return mid+1;
                }else{
                    low = mid+1;
                }
            }
        }
        return -1;
    }
};