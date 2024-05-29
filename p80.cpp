// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
 #include <numeric>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int index = 2 ;

        for(int i=2;i<nums.size();i++){
            if(nums.at(i)!=nums.at(i-2) || nums.at(i)!=nums.at(index-2)){
                nums.at(index) = nums.at(i) ; 
                index++ ; 
            }
        } 

        index = index<nums.size() ? index : nums.size() ; 
        return index ;         
    }
};

int main(){

    vector<int> vec = {1,2,2,2,3,6,19,7,6,4,4,4,4,5,9} ; 
    sort(vec.begin(),vec.end()) ; 

    cout<<"Actual array is: "<<endl;

    for(int i=0;i<vec.size(); i++){
        cout<<vec.at(i)<<" ";
    }
    cout<<endl;


    Solution mySolution1 ; 

    int uniqueLength = mySolution1.removeDuplicates(vec) ; 

    cout<<"The number of unique elements in the array is: "<<uniqueLength<<endl ;

   

    cout<< "The unique array is: "<<endl;

    for(int i=0;i<uniqueLength; i++){
        cout<<vec.at(i)<<" ";
    }
    cout<<endl;

    return 0 ; 
}