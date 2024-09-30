#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;
// overloading prefix operator;
// class A{
//     int a;
//     int b;
//     public:
//     A(int i,int j):a(i),b(j){}
//     void print();
//     void operator++(){
//         a=a+1;
//         b=b+1;
//     }
// };
// void A::print(){
//     cout<<"the value of a is "<<a<<endl;
//     cout<<"the value of b is "<<b<<endl;
    
// }



// int main(){
//     A aa(2,3);
//     aa.print();
//     ++aa;
//     aa.print();

    
//     return 0;
// }

class A{
    //overload postfix operators
    int a;
    int b;
    public:
    A(int i,int j):a(i),b(j){}
    void print();
    void operator++(int ){
        a=a+1;
        b=b+1;
    }
};

void A::print(){
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
    
}

int main(){
    A aa(2,3);
    aa.print();
    aa++;
    aa.print();

    
    return 0;
}