#include<iostream>
using namespace std;

class Solution{
public:	
		
	string removeVowels(string S) 
	{
	    // Your code goes here
	    string str=  "";
	    for(auto i: S){
	        if(i=='a' or i=='e' or i=='i'  or i=='o' or i=='u' ){
	            continue;
	        }
	        str += i;
	    }
	    return str;
	}
};