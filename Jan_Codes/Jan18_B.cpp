#include<vector>
using namespace std;


class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int count5=0, count10=0;
        for(int i=0; i<bills.size(); i++){
            if(bills[i]==5){
                count5++;
            }else if(bills[i]==10 && count5>0){
                count10++; count5--;
            }else if(bills[i]==20 && count10>0 && count5>0){
                    count10--; count5--;
            }else if(bills[i]==20 && count5>2){
                count5-=3;
            }else{
                return false;
            }
        }
        return true;
    }
};