// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
 #include <numeric>
using namespace std;

class Solution {
public:

    struct results{
        int minNumCandy ; 
        vector<int> candyNumsVec ; 
    } ; 

    results candy(vector<int>& ratings) {

        results res1 ; 

        int n = ratings.size() ; 
        vector<int> candyNums(n) ; 
        candyNums[0] = 1 ; 
        // Forward pass:
        for(int i =1;i<n;i++){

            if(ratings[i]>ratings[i-1]){
                candyNums[i] = candyNums[i-1] + 1 ;
            }else{
                candyNums[i] = 1 ; 
            }
            // cout<<candyNums[i]<<endl;
        }

        // Backward Pass:
        for(int i = n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                candyNums[i] = max(candyNums[i],candyNums[i+1]+1) ;
            }
            // cout<<candyNums[i]<<endl;
        }

        res1.minNumCandy =  accumulate(candyNums.begin(), candyNums.end(), 0) ;
        res1.candyNumsVec = candyNums ; 
        return res1 ; 
        // return accumulate(candyNums.begin(), candyNums.end(), 0) ; 

        
    }
};

int main(){

    vector<int> vec = {1,2,3,4,5,6,3,0,12,4,7,2,3,9,1,0} ; 

    cout<<"Actual array is: "<<endl;

    for(int i=0;i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    Solution mySolution1 ; 
    Solution::results myResults1 = mySolution1.candy(vec) ; 

    cout<< "The minimum candy number is: "<<myResults1.minNumCandy<<endl;

    cout<<"Candies that each person gets:"<<endl ;
    for(int i=0;i<myResults1.candyNumsVec.size();i++){
        cout<<myResults1.candyNumsVec[i]<<" " ;
    }
    cout<<endl ; 

    

    return 0 ; 
}