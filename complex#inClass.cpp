#include<iostream>
using namespace std;
class complex {
 int a;
 int b;
 public:
 void setdata(int  a1, int b1){
    a=a1;
    b=b1;

 }
 void setdatabysum(complex f,complex h){

 a=f.a+h.a;
 b=f.b+h.b;
}
  void printNumber(){
    cout<<"Your Complex #  is  "<<a<<"+"<<b<<"i"<<endl;
  }
};
int main(){
    complex  c1, c2, c3;
    c1.setdata(1,8);
    c1.printNumber();

    c2.setdata(8,1);
    c2.printNumber();

    c3.setdatabysum(c1,c2);
    c3.printNumber();

    return 0;
}