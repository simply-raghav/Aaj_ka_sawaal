#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=n; i>=1;i--){
        for(int j=n-i; j>0; j--){
            cout<<"  ";
        }
        for(int j=1; j<=(i*2)-1; j++){
            if(i==n){
                cout<<"* ";
                continue;
            }
            if(j==1 or j==(i*2)-1){ 
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }


    return 0;
}
