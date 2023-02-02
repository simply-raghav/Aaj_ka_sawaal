#include<string>
using namespace std;

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int blackCount=0;
        for(int i=0; i<k; i++){
            if(blocks[i]=='B'){
                blackCount++;
            }
        }
        int minAns = k-blackCount;
        for(int i=k; i<blocks.size(); i++){
            if(blocks[i-k]=='B'){
                blackCount--;
            }
            if(blocks[i]=='B'){
                blackCount++;
            }
            int temp=k-blackCount;
            minAns = temp<minAns? temp : minAns;
        }
        return minAns;
    }
};