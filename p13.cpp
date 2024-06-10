// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
 #include <numeric>
#include <unordered_map>
using namespace std;

class Solution {
public:

    struct results{
        int number ; 
    } ; 

    results romanToInt(string s) {

        results SolutionRes1 ; 
        unordered_map<char, int> RImap ; 

        RImap['I'] = 1 ; 
        RImap['V'] = 5 ; 
        RImap['X'] = 10 ; 
        RImap['L'] = 50 ; 
        RImap['C'] = 100 ; 
        RImap['D'] = 500 ; 
        RImap['M'] = 1000 ; 
        int number = RImap[s[0]] ; 

        char c ; 


        for(int i=1;i<s.size();i++){

            // c = input[i] ;
            if(RImap[s[i]]<=RImap[s[i-1]]){
                number = number + RImap[s[i]] ;
            }else{
                number = number + RImap[s[i]] - 2*RImap[s[i-1]] ; 
                // i = i+1 ;
            }


        }

        SolutionRes1.number = number ;
        return SolutionRes1 ; 


        
    }
};

int main(){

    string a = "XXXII" ;

    Solution mySolution1 ; 
    Solution::results myResult = mySolution1.romanToInt(a) ; 
    
    cout<< "The Roman numerral conversion is: "<<myResult.number<<endl;
   

    return 0 ; 
}