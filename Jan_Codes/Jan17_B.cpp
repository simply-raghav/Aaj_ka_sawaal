#include<vector>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        // Code here.
        if(a[0]>a[1]){
            return a[0];
        }
        if(a[a.size()-1]>a[a.size()-2]){
            return a[a.size()-1];
        }
        
        int low =0, end = a.size()-1;
        while(low<=end){
            int mid = (low+end)/2;
            if(a[mid]>a[mid-1] && a[mid]>a[mid+1]){
                return a[mid];
            }else if(a[mid]>a[mid-1]){
                low = mid;
            }else{
                end = mid;
            }
        }
        
        
        return -1;
        
    }
};