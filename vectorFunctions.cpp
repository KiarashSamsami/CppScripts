// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
 #include <numeric>
 #include "time.h"
using namespace std;


void vectorPrint(vector<int> a , int dir){

    if (dir == 0){
        for(int i=0;i<a.size();i++){
            std::cout<<a.at(i)<<" ";
         }
         std::cout<<endl ; 
    }else{
        for(int i=0;i<a.size();i++){
            std::cout<<a.at(i)<<endl;
         }
    }

}


int main()
{

  srand(time(0)); 
// Define a vector:
vector<int> a ; 
// Define a vector of certain size:
vector<int> x(5) ;
// Define a vector of certain size and a constant number: 
vector<int> y(6,2) ;

vectorPrint(a,0) ; 
vectorPrint(x,0) ; 
vectorPrint(y,0) ; 


y.assign(5,15) ; 

// Generate a random vector: 
generate(x.begin(),x.end(),rand) ; 
vectorPrint(x,0) ; 


// Sort a voctor:
sort(x.begin(),x.end()) ; 
vectorPrint(x,0) ; 

// Get the sum of values in a vector:
cout<<"Total sum using accumulate is: "<<accumulate(x.begin(),x.end(),0)<<endl ; 


// Resize the vector to a smaller size
x = {x.begin()+1,x.end() - 2} ;
vectorPrint(x,0) ; 

// Resize the vector to a larger size
x.resize(12) ; 
vectorPrint(x,0) ;

// Resize the vector to a smaller size
x.resize(5) ; 
vectorPrint(x,0) ;

x.insert(x.begin(),3) ;
x.insert(x.begin()+3,12) ;
x.insert(x.end(),10) ;                                               
vectorPrint(x,0) ; 

    return 0 ; 
}