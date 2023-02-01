class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        int arr[201]={0};
        for(int i=0; i<n; i++){
            arr[a[i]]++;
            // cout<<a[i]<<"   "<<arr[a[i]];
            if(arr[a[i]]==k){
                return a[i];
            }
        }
        return -1;
    }
};