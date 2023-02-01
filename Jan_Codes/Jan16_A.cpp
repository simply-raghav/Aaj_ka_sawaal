/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

int guess(int num);
class Solution {
public:
    int guessNumber(int n) {
        int low =0; 
        while(low<=n){
            int guessPick = low+ (n-low)/2;
            int res =  guess(guessPick);
            if(res==0){
                return guessPick;
            }else if(res>0){
                low = guessPick+1;
            }else{
                n = guessPick-1;
            }
        }
        return -1;
    }
};