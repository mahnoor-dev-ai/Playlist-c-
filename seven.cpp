#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a=2,b=34,c=123;
    cout<<"The value of a is :"<<a<<endl;
    cout<<"The value of b is :"<<b<<endl;
    cout<<"The value of c is :"<<c<<endl;


    //with using C++ manipulators.
    cout<<"The value of a is :"<<setw(10)<<a<<endl;
    cout<<"The value of b is :"<<setw(10)<<b<<endl;
    cout<<"The value of c is :"<<setw(10)<<c<<endl;

    return 0;


}
