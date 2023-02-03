#include<iostream>
#include<vector>

using namespace std;
class Solution {
public:

    Solution(){
        std::ios::sync_with_stdio(false);
        std::cin.tie(0);
        std::cout.tie(0);
    }
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum=0, count=0;
        for(int i=0; i<k; i++){
            sum+=arr[i];
        }
        // std::cout<<sum<<"\t"<<(sum/k)<<endl;
        if((sum/k) >= threshold){
            count++;
        }

        for(int i=k; i<arr.size(); i++){
            sum-=arr[i-k];
            sum+=arr[i];
            // std::cout<<sum<<"\t"<<(sum/k)<<endl;
            if((sum/k) >= threshold){
               count++;
            }
        }
        return count;
    }
};