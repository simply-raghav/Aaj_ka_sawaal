#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        int ans=0;
        int i=0,j=0;

        while(i<players.size() && j<trainers.size()){
            if(players[i]<=trainers[j]){
                i++; j++; ans++;
            }else{
                j++;
            }
        }

        return ans;
    }
};