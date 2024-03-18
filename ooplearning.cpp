#include <iostream>

using std::string;
// using namespace std ; 
class employee{
    public:
    string Name;
    string Company;
    int Age ; 
    void IntroduceYourself(){
        std::cout<<"I am "<<Age<<std::endl ; 
        std::cout<<"and my name is " << Name << std::endl ;
    }
    employee(string name, string company, int age){
        Age = age ; 
        Name = name ; 
        Company = company ; 
    }
};
int main(){

    employee kia = employee("Kiarash", "SUT", 25) ; 
    // kia.Age = 12 ; 
    // kia.Company = "SUT" ; 
    // kia.Name = "Kiarash" ; 
    kia.IntroduceYourself() ; 
    return 0;
}