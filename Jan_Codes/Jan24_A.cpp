#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        for(int i=0; i<nums.size(); i++){
            int temp = target-nums[i];
            if(umap.find(temp)!=umap.end()){
                return {umap[temp], i};
            }else{
                umap[nums[i]]=i;
            }
        }
        return {};
    }
};