// OVERLOADING = OPERATOR
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;
class Employee{
    int id;
    string name;
    public:
    void setdata(){
        cout<<"Enter the name of employee "<<endl;
        cin>>name;
        cout<<"Enter the ID of employee "<<endl;
        cin>>id;
    }
    void getdata(){
        cout<<"======================================================"<<endl;
        cout<<"employee name : "<<name<<endl;
        cout<<"employee ID : "<<id<<endl;
    }
    void operator =(Employee o1){

        name=o1.name;
        id= o1.id;
    }

};

int main(){
    Employee dhruv,candy,arjun;
    dhruv.setdata();
    dhruv.getdata();
    arjun.setdata();
    arjun.getdata();
    candy=dhruv;
    candy.getdata();
    return 0;
}