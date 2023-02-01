#include <iostream>
using namespace std;

int gcd(int n1, int n2);
void prefix(int arr[], int n, int preArray[]);
void suffix(int arr[], int n, int sufArray[]);

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T-->0){
	    int n, q;
	    cin>>n>>q;
	    int arr[n+2], preArr[n+2]={0}, sufArr[n+2] = {0};
	    for(int i=1; i<=n; i++){
	        cin>>arr[i];
	    }
        for(int i=0; i<n+2; i++){
            sufArr[i]=0; 
            preArr[i]=0;
        }
        for(int i=1; i<=n; i++){
            preArr[i] = gcd(preArr[i-1], arr[i] );
        }
        sufArr[n] = arr[n];
        for(int i=n-1; i>=1; i--){
            int temp = gcd(arr[i], sufArr[i+1]);
            // cout<<temp<<" ";
            sufArr[i] = temp;
        }
        //     cout<<"Raghav";
        // for(int i=0; i<n+2; i++){
        //     cout<<preArr[i] << "\t" << sufArr[i]<<endl;
        // }

        // for(int i=0; i<n+2; i++){
        //     cout<< sufArr[i]<<endl;
        // }


        
	    while(q-->0){
	        int l, r;
	        cin>>l>>r;
	        cout<< gcd(preArr[l-1], sufArr[r+1])<<endl;
	    }
	}
	
	
	return 0;
}

int gcd(int n1, int n2) {
    if (n2 != 0)
        return gcd(n2, n1 % n2);
    else
        return n1;
}






