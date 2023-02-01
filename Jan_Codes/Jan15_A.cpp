// The API isBadVersion is defined for you.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 0;
        while(low<=n){
            int mid = low+(n-low)/2;
            if(isBadVersion(mid)){
                if(isBadVersion(mid-1)){
                    n=mid-1;
                }else{
                    return mid;
                }
            }else{
                low = mid+1;
            }
        }
        return -1;
    }
};