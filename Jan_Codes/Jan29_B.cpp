#include<vector>
using namespace std;

class Solution {
  public:
    int sumOfAll(int l, int r){
        // code here
        int sum=0;
        vector<bool> prime(r+5, true);
        
        for(int i=2; i<=r; i++){
            
            if(prime[i]){
                
                if(i>=l){
                    sum+=i;
                }
                for(int j=2*i; j<=r; j+=i){
                    prime[j] = false;
                    if(j>=l){
                        sum+=i;
                    }
                }
                
            }
        }
        return sum;
        
    }
};