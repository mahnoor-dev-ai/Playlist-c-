#include<iostream>
using namespace std;
int main(){
    //POINTER?  ...That holds address of other operator 
    int a=3;
    int*b= &a;
     //&....(to find address of operator) is the address of operator
    cout<<"the address of a is:"<<&a<<endl;
    //&a==b.
    cout<<"the address of a is:"<<b<<endl;
    //* ....(to find the value stored in this address) is dereference operator.
    cout<<"the value at address b is:"<<*b<<endl; 

    return 0;
}