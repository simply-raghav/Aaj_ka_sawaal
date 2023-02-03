#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:

    int countPrime(int n){


        vector<bool> arr(n+1, true);
        arr[0] = arr[1] = false;
        for(int i=2; i<=n; i++){
            if(arr[i]){
                for(int j=i*i; j<=n; j+=i){
                    arr[j]=false;
                    // cout<<i<<"\t"<<j<<endl;
                }
            }
        }

        return count(begin(arr), end(arr), true);
    }

    long factorial(int n) {
        long fact = 1;
        for (int i = 1; i <= n; ++i)
            fact = fact * i % (1000000007);
        return fact;
    }

    int numPrimeArrangements(int n) {
        int primes = countPrime(n);
        // cout<<primes;
        return (int)(factorial(n-primes)*factorial(primes)%1000000007);      
    }
};