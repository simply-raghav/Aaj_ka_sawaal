#include<unordered_map>
#include<string>
using namespace std;


class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> uMap1, uMap2;
        for(int i=0; i<s.length(); i++){
            if(uMap1.find(s[i])==uMap1.end() && uMap2.find(t[i])==uMap2.end()){
                uMap1[s[i]]=t[i];
                uMap2[t[i]]=s[i];
            }else{
                if(uMap1[s[i]]!=t[i] || uMap2[t[i]]!=s[i]){
                    return false;
                }
            }
        }
        return true;
    }
};