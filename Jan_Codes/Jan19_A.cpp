#include<string>
#include<iostream>
using namespace std;

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int arr[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        int chk=0;
        for(int i=0; i<s.length(); i++){
            arr[s[i]-'a']++;
            chk=arr[s[i]-'a'];
        }
        // int chk=0;
        for(int i=0; i<26; i++){
            if(arr[i]!=0 && chk!=arr[i]){
                return false;
            }
        }
        return true;        
    }
};
