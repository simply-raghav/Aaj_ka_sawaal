#include<vector>
using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int min = 999;
        for(int i=0; i<letters.size(); i++){
            if(letters[i]-target>0 && letters[i]-target<min){
                min = letters[i]-target;
            }
        }
        if(min==999){
            return letters[0];
        }else{
            return target+min;
        }
    }
};