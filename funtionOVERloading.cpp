#include<iostream>
using namespace std;
//SUM OF TWO VARIABLES.
int sum(int a,int b){
    return a+b;
}
//SUM OF THREE Integers.
int sum(int a,int b ,int c ){
    return a+b+c;
}
//volume of CUBE .
int volume(int  x){
   return (x*x*x);
}
//AREA of circle.
//area=r*r;
// but double times r gives error .so we assume ( b and h).
int circle(int h,int b){
    return(b*h);

}
//Circumference of circle.
int circle(int r)
{
    return(2*3.14*r);
}

int main(){
    cout<<"the sum of 2 and 6 is"<<sum(3,6)<<endl;
    cout<<"the sum of 2  , 7and 3 is"<<sum(2,7,3)<<endl;
    cout<<"the  VOLUME of cube  is"<<volume(2)<<endl;
    cout<<"the  area of circle is"<<circle(2,7)<<endl;
    cout<<"the  CIRCUMFERENCE   of circle is"<<circle(2)<<endl;

    return 0;
}