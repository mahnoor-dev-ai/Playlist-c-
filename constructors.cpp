#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:

  complex(void);
  void printnumber(){
    cout<<"Your complex number is:"<<a<<"+"<<b<<"i"<<endl;
  }

};
complex::complex(void){
    a=10;
    b=0;
    cout<<"Hello   World."<<endl;
}
int main(){
    complex c;
    c.printnumber();
    return 0;
}
