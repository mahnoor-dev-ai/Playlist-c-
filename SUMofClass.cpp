#include<iostream>
using namespace std;
class B;
class A{
  int data;
  public:
   void setValue(int value){
    data=value;
    
   }
   friend void add(A,B);
};
class B{
 int num;
 public:
 void setvalue(int value){
    num=value;

 }
 friend void add(A,B);
};
void add(A o1,B o2){
    cout<<"Summing of values gives:"<<o1.data+o2.num<<endl;
}
int main(){
    A  kq;
    kq.setValue(9);
    B lw;
    lw.setvalue(1);
    add (kq,lw);
    return 0;
}