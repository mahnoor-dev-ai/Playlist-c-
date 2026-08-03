#include<iostream>
using namespace std;
class animal{
 private:
 int a,s,d;
 public:
 int q,w;
 void setData( int a1,int s1,int d1);
 void getData()
 {
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of s is "<<s<<endl;
    cout<<"The value of d is "<<d<<endl;
    cout<<"The value of q is "<<q<<endl;
    cout<<"The value of w is "<<w<<endl;
 }
};
void animal::setData(int a1,int s1,int d1){
a=a1;
s=s1;
d=d1;
}

int main(){
     animal cat;
     cat.q=23;
     cat.w=45;
     cat.setData(2,7,9);
     cat.getData();

    return 0;
}