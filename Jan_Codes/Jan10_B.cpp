#include<string>
#include<stack>
using namespace std;


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S){
        stack<string> st;
        int pos = 0;
        for(int i = 0; i<S.length(); i++){
            if(S[i] == '.'){
                string toPush = "";
                for(int j = pos; j<i; j++){
                    toPush = toPush + S[j];
                }
                if(pos != 0){
                    toPush += '.';
                }
                st.push(toPush);
                pos = i+1;
            }
            if(i == S.length()-1){
                string toPush = "";
                for(int j = pos; j<=i; j++){
                    toPush = toPush + S[j];
                }
                if(pos != 0){
                    toPush += '.';
                }
                st.push(toPush);
                pos = i+1;
            }
        }
        string res = "";
        while(!st.empty()){
            res = res + st.top();
            st.pop();
        }
        return res;
    } 
};