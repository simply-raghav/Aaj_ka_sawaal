#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if(nums.size()==1){
            return nums[0] * 1.0;
        }
        double sum=0;
        for(int i=0; i<k; i++){
            sum+= nums[i];
        }
        double max=0, temp=(sum/k);
        max=temp;
        for(int i=k; i<nums.size(); i++){
            sum-= nums[i-k];
            sum+= nums[i];
            temp = sum/k;
            max = temp>max ? temp : max;
        }
        return max;
    }
};