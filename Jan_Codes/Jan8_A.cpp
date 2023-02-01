#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int low=0, end=0;
	    for(int i=0; i<n; i++){
	        if(arr[i]!=0){
	            if(low!=end){
	                swap(arr[low], arr[end]);
	            }
	            low++; end++;
	        }else{
	            end++;
	        }
	    }
	}
};