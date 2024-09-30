#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

    class A{
        int a;
        public:
        void setdata(){
            cout<<"Enter the value of a "<<endl;
            cin>>a;
        }
        void print();
        bool operator==(A o1){
            if (a==o1.a){
                return true;
            }
            return false;
        } 
    };
    void A::print(){
        cout<<"The value of a is "<<a<<endl;
    }
 
int main(){
    A aa,bb;
    bb.setdata();
    aa.setdata();
    aa.print();
    if (aa==bb) {
        cout<<"a";
    }

    return 0;
}