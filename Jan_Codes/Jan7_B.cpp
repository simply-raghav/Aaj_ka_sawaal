int missingNumber(int A[], int N)
{
    // Your code goes here
    int temp = N*(N+1)/2;
    for(int i=0; i<N-1; i++){
        temp-=A[i];
    }
    return temp;