
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
        sample.salary = salary+aPerson.salary;
        return sample;
    }
    
    friend ostream& operator<<(person &printable, ostream& out);
    
};
ostream& operator<<(person &printable, ostream& out){
    
    out<<printable.fullName<<" "<<printable.age<<" "<<printable.salary;
    return out;
}




int main(){
    person dinaol;
    person kirubel;
    dinaol = kirubel +dinaol;
    
    
    cout<<dinaol.getsalary() << endl;
    cout<<"Dinaol"<<endl;
    
    return 0;
}


