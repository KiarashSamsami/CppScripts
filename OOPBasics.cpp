
#include <iostream>

using namespace std;

int addition (int a, int b)
{
  int r;
  r=a+b;
  return r;
}


class circle{

public:
int rad ;
int center_x ; 
int center_y ; 

void get_diameter(){
  cout<<"Diameter is:"<<rad*2<<endl;
}

};


class AbstractEmployee {
  virtual void askForPromotion()=0 ; 
} ; 

class Employee:AbstractEmployee{
protected: 
string Name ; 
string Company; 
int Age; 
public:
void setName(string name){
  Name = name ; 
}
string getName(){
    return Name ; 
}
void IntroduceYourself(){
  std::cout<<"Name - "<<Name<<" and age is - "<<Age<<std::endl;
}

void askForPromotion(){
  if(Age>30)
  std::cout<<Name<<"got promoted!"<<std::endl ; 
}
virtual void work(){
  std::cout<<Name<<" is checking mail..."<<std::endl ; 
}


Employee(string name, string company, int age){
  Age = age ; 
  Name = name ; 
  Company = company ;
}

};

class DeveloperEmployee: public Employee{

  public:
  string FavProgrammingLanguage ; 

  DeveloperEmployee(string name, string company, int age, string favProgrammingLanguage)
  :Employee(name, company, age)
  {
    FavProgrammingLanguage = favProgrammingLanguage ; 
  }
void work(){
  std::cout<<Name<<" developing some code..."<<std::endl ; 
}
};


int main(){


  Employee employee1 = Employee("Kiarash", "SUT", 31) ; 
  employee1.IntroduceYourself() ; 

  employee1.setName("Kooros") ; 
  std::cout<<"His name is changed to "<<employee1.getName()<<endl ; 

  DeveloperEmployee DevEmp1 = DeveloperEmployee("Khashi ","Manochh",25,"C++"); 

  DevEmp1.work() ; 

  Employee *e1 = &DevEmp1 ;
  e1->work(); 
    return 0 ; 
}

