

class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int k) 
    { 
        int low = 0, end=N-1;
        while(low<=end){
            int mid = (low+end)/2;
            if(arr[mid]==k){
                return 1;
            }else if(arr[mid]>k){
                end = mid-1;
            }else if(arr[mid]<k){
                low = mid+1;
            }
        }
        return -1;
    }
};