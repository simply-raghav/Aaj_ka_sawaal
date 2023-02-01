#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    bool arr[n+1];
    for(int i=2; i<=n; i++){
        arr[i] = true;
    }
    for(int i=2; i*i<=n; i++){
        if(arr[i]){
            for(int j = i*i; j<=n; j+=i){
                arr[j]=false;
                if(i%2!=0) j+=i;        
            }
        }
        if(i%2!=0) i++;
    }
    vector<int> primes;
    for(int i=2; i<=n; i++){
        if(arr[i]) primes.push_back(i);
    }
    // for(int i: primes){
    //     cout<< i << "\t";
    // }
    for(int i=0; i<primes.size()-1; i++){
        int num = primes[i]+primes[i+1] + 1;
        if(num<=n){
            if(arr[num]) k--;
        }else{
            break;
        }
    }
    if(k>0){
        cout<<"NO";
    }else{
        cout<<"YES";
    }

    return 0;
}