class Solution{
public:	
	int search(int A[], int N){
	    //code
	    for(int i=0; i<N; i++){
	        if(A[i]!=A[i+1]){
	            return A[i];
	        }else{
	            i++;
	        }
	    }
	}
};