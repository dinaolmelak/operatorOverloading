
#include <iostream>
#include <string>
using namespace std;

class person{
private:
    string fullName;
    int age;
    int salary;
public:
    person(){
        fullName="";
        age=1;
        salary=100;
    }
    person(string pfName,int pAge, int psalary){
        fullName=pfName;
        age=pAge;
        salary=psalary;
    }
    int getsalary(){
        return salary;
    }
    person operator+(person aPerson){
        person sample;
        sample.fullName = this->fullName +" and "+ aPerson.fullName;
        sample.age = this->age + aPerson.age;
        sample.salary= this->salary + aPerson.salary;
        //sample.salary = salary+aPerson.salary;
        //sample.fullName = sample.fullName + " "+ aPerson.fullName;
        //sample.age = sample.age + aPerson.age;
        
        return sample;
    }
    
    friend ostream& operator<<(ostream& out, person &printable);
    
};
ostream& operator<<(ostream& out, person &printable){
    
    out<<"My Name is "<<printable.fullName<<" and my age is "<<printable.age<<" and my salary is "<<printable.salary<<endl;
    return out;
}




int main(){
    person dinaol("Dinaol", 20, 2001);
    person kirubel("Kirubel", 25, 2222);
    cout<<dinaol;
    dinaol = kirubel +dinaol;
    
    cout<<dinaol<<endl;
    //cout<<dinaol.getsalary() << endl;
    //cout<<"Dinaol"<<endl;
    
    return 0;
}


