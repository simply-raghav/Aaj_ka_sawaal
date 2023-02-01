class Solution{
public:
    int primeSum(int N){
        // code here
        int sum=0;
        while(N>0){
            int temp = N%10;
            if(temp == 2 or temp == 3 or temp == 5 or temp == 7 ){
                sum+=temp;
            }
            N/=10;
        }
        return sum;
    }
};