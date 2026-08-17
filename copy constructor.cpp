

//THREE    PROGRAMS     HERE.------>


#include<iostream>
using namespace std;
class number{
  int a;
  public:
  number( ){
    a = 0;
  }
  number(int num){
    a = num ;

  }
  void display(){
    cout<<"The number for this object is :"<<a<<endl;

  }
  number (number & obj){
    a = obj.a;
    cout<<"The Copy Constructor is !!"<<endl;
  }
};
int main(){
    number x , y , z(345) ,z2 ;
    x.display();
    y.display();
    z.display();

    number z1(x);
    z1.display();

   z2 = z ;
   z.display();

    return 0;
}






#include <iostream>
using namespace std;
class student
{
    int age;
    string name;

public:
    student(int a, string b)
    {
        age = a;
        name = b;
    }
    // copy  contructor .
    student(student &obj)
    {
        age = obj.age;
        name = obj.name;
    }
    void displaydata()
    {
        cout << "Name :" << name << endl;
        cout << "Age :" << age << endl;
    }
};
int main()
{
    student s1(19, " Mahnoor ");
    student s2(s1);

    cout << "First student is " << endl;
    s1.displaydata();

    cout << "Copied  student is " << endl;
    s2.displaydata();

    return 0;
}






#include<iostream>
using namespace std;
class info{
  int model;
  string name;
  public:
  info (int a ,string b){
    model = a;
    name = b;

  }
  //copy contructor .
  info(info &obj){
    model = obj.model;
    name = obj.name;

  }
  void display (){
    cout<<" Model : "<<model <<endl;
    cout<<" Name : "<<name<<endl;
  }

};
int main(){
    info s1(78,"Honda  City");
     info s2(s1);

     cout<<"The info of my car is "<<endl;
     s1.display();

     cout<<"The info of my car is "<<endl;
     s2.display();

    
    return 0;
}





