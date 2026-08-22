#include<iostream>
using namespace std;
class base1{
  protected:
  int base1int;
  public:
  void set_base1int(int m){
    base1int = m ;

  }
  
};
class base2{
  protected:
  int base2int;
  public:
  void set_base2int(int m){
    base2int = m ;

  }

};
class derived : public base1, public base2{
public:
void  show(){
    cout<<"The value of  Base1 is :"<<base1int<<endl;
    cout<<"The value of  Base2 is :"<<base2int<<endl;
    cout<<"The sum of  Base1  and  Base2  is :"<<base1int+base2int<<endl;

}

};
int main(){
    derived mahnoor;
    mahnoor.set_base1int(34);
    mahnoor.set_base2int(23);
    mahnoor.show();

    return 0;
}