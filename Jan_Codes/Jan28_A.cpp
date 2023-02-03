#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int atoi(string str){
        int num = 0;
        for(int i=0; i<str.size(); i++){
            num*=10;
            num+= str[i]-'0';
        }
        return num;
    }

    int divisorSubstrings(int num, int k) {
        int count=0, temp=0;
        string str = to_string(num);
        string tempStr="";
        for(int i=0; i<k; i++){
            tempStr+=str[i];
        }
        temp = atoi(tempStr);
        if(temp!=0 && num%temp==0){
            count++;
        }

        for(int i=k; i<str.size(); i++){
            tempStr.erase(tempStr.begin());
            tempStr+=str[i];
            temp = atoi(tempStr);
            if(temp!=0 && num%temp==0){
            count++;
            }
        }
        return count;
    }
};