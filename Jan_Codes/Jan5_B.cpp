int convertFive(int n) {
    // Your code here
    int num=0;
    while(n>0){
        num*=10;
        if(n%10==0){
            num+=5;
        }else{
            num+= n%10;
        }
        n/=10;
    }
    n=0;
    while(num>0){
        n*=10;
        n+= num%10;
        num/=10;
    }
    return n;
}