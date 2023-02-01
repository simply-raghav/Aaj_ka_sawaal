#include<cmath>
using namespace std;
class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
        if(n==0){
            return false;
        }
        // Your code here    
        long double ans = log2(n);
        long int val = (long int)ans;
        if(ans>val){
            return false;
        }else{
            return true;
        }
    }
};