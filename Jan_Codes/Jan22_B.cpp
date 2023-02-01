#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //2nd Approach
        sort(nums.begin(), nums.end());

        for(int i=1; i<nums.size(); i++){
            if(nums[i-1]==nums[i]){
                return true;
            }
        } 

        return false;
        
        //1st Approach using set
        // set<int> s;
        // for(int i=0; i<nums.size(); i++){
        //     if(s.find(nums[i])!=s.end()){
        //         return true;
        //     }
        //     s.insert(nums[i]);
        // }
        // return false;
    }
};