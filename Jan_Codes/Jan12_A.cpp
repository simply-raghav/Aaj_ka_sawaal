#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count=0; 
        for(string str: words){
            if(str.compare(s.substr(0, str.length()))==0){
                count++;
            }
        }
        return count;
    }
};