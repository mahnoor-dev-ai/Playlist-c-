#include<iostream>
using namespace std;
class  Animal{
public:
string name ;
void setname();
};
void Animal ::setname(){
    cin>>name;
}
class Dog :public Animal{
public:
int age;
void setage();
void displaydata();

};
void Dog::setage(){
    cin>>age;
}
void Dog ::displaydata()
{
    cout<<"Name :"<<name<<endl;
    cout<<"Age  :"<<age<<endl;

}
int main(){
    Dog der;
    cout<<"Enter name :"<<endl;
    der.setname();

    cout<<"Enter  age :"<<endl;
    der.setage();
    cout<<"Name :"<<der.name<<endl;
    cout<<"Age :"<<der.age<<endl;
    return 0;
}