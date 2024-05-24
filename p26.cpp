// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
 #include <numeric>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 1 ; 
        for(int i=1;i<nums.size();i++){
            if(nums.at(i)!=nums.at(i-1)){
                nums.at(index) = nums.at(i) ; 
                index++ ; 
            }
        }
        return index;
    }
};

int main(){

    vector<int> vec = {1,2,2,2,3,6,19,7,6,4,4,5,9} ; 
    Solution mySolution1 ; 

    int uniqueLength = mySolution1.removeDuplicates(vec) ; 

    cout<<"The number of unique elements in the array is: "<<uniqueLength<<endl ;
    cout<< "The unique array looks like: "<<endl;

    for(int i=0;i<uniqueLength; i++){
        cout<<vec.at(i)<<" ";
    }
    cout<<endl;

    return 0 ; 
}