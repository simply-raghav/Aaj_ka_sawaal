class Solution {
public:
    int mySqrt(int x) {
        long n=x;
        long i=0;
        long res=0;
        if(x==1) return 1;
        while(i<=n){
            long mid = (i+n)/2;
            if(mid*mid<x){
                res=mid;
                i=mid+1;
            }else if(mid*mid>x){
                n=mid-1;
            }else{
                return (int)mid;
            }
        }
        return (int)res;
    }
};