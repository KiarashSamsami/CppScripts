// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
 #include <numeric>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n=nums.size() ; 
        vector<int> prefix(n) ;
        vector<int> suffix(n) ; 
        vector<int> answer(n) ; 
        prefix[0] = 1 ; 
        suffix[n-1] = 1 ; 

        for(int i=1;i<n;i++){
            prefix[i] = prefix[i-1]*nums[i-1] ; 
            suffix[n-1-i] = suffix[n-i]*nums[n-i] ; 
        }
        
        for(int i=0;i<n;i++){
            answer[i] = prefix[i]*suffix[i] ; 
        }

        return answer ;
    }
};

int main(){

    vector<int> vec = {1,2,3,4,5,6} ; 

    cout<<"Actual array is: "<<endl;

    for(int i=0;i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;


    Solution mySolution1 ; 

    vector<int> uniqueLength(vec.size());
     uniqueLength = mySolution1.productExceptSelf(vec) ; 

    cout<< "The answer is: "<<endl;

    for(int i=0;i<uniqueLength.size(); i++){
        cout<<uniqueLength[i]<<" ";
    }
    cout<<endl;

    return 0 ; 
}