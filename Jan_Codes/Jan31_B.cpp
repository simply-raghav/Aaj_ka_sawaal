#include<vector>
using namespace std;


class NumArray {
public:
    vector<int> vec;
    NumArray(vector<int>& nums) {
        vec.push_back(nums[0]);
        for(int i=1; i<nums.size(); i++){
            vec.push_back(vec[i-1]+nums[i]); 
        }
    }
    
    int sumRange(int left, int right) {
        return vec[right]-(left==0?0:vec[left-1]);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */