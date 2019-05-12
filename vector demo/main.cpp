
#include <iostream>
#include <string>
using namespace std;

class person{
private:
    string fullName;
    int age;
    int salery;
public:
    person(){
        fullName="";
        age=1;
        salery=100;
    }
    person(string pfName,int pAge, int pSalery){
        fullName=pfName;
        age=pAge;
        salery=pSalery;
    }
    int getSalery(){
        return salery;
    }
    person operator+(person aPerson){
        
        person sample;
        sample.salery = salery+aPerson.salery;
        return sample;
    }
    
    friend ostream &operator<<(person &printable, ostream& out);
    
};
ostream& operator<<(person &printable, ostream& out){
    
    out<<printable.fullName<<" "<<printable.age<<" "<<printable.salery;
    return out;
}




int main(){
    person dinaol;
    person kirubel;
    dinaol = kirubel +dinaol;
    
    cout<<dinaol.getSalery() << endl;
    cout<<"Dinaol"<<endl;
    
    
}


