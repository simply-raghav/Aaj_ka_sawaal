#include<vector>
#include<set>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> newSet1,newSet2;
        for(int i=0; i<nums1.size(); i++){
            newSet1.insert(nums1[i]);
        }
        for(int i=0; i<nums2.size(); i++){
            newSet2.insert(nums2[i]);
        }
        vector<int> result;
        for(int i: newSet1){
            if(newSet2.find(i)!=newSet2.end()){
                result.push_back(i);
            }
        }
        return result;
    }
};