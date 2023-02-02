#include<vector>
using namespace std;

class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &arr , int N){
        // code here 
        long sum=0,res=0, i;
        for(i=0; i<K; i++){
            sum+=arr[i];
        }
        res=sum;
        while(i<N){
            sum+=arr[i];
            sum-=arr[i-K];
            i++;
            res = sum>res?sum:res;
        }
        return res;
    }
};