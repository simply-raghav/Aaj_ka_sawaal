#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int low = 0, end=s.length()-1;
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        while(low<=end){
            while(!((s[low]>='A' && s[low]<='Z') || (s[low]>='0' && s[low]<='9'))){
                low++;
            }
            while(!((s[end]>='A' && s[end]<='Z') || (s[end]>='0' && s[end]<='9'))){
                end--;
            }
            if(!(s[low]==s[end])){
                return false;
            }
            low++; end--;
        }

        // cout<<s;
        return true;
    }
};

int main(){
    string str = "raca a car";
    Solution s;
    cout<<s.isPalindrome(str);
    return 0;   
}