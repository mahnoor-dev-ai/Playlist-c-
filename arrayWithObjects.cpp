#include<iostream>
using namespace std;
class  employee
{
int id;
int salary;
  public:
  void setid(void){
    salary =5600;
    cout<<"Enter the ID: "<<endl;
    cin>>id;

  }
  void getid(void){
    cout<<"The id of employee is:"<<id<<endl;

  }
};

int main(){
    employee  Aiksol[4];
    for (int  i = 0; i < 4; i++)
    {
        Aiksol[i].setid();
        Aiksol[i].getid();

       

    }
    
    return 0;
}