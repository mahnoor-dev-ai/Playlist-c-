#include<iostream>
using namespace std;
int sum(int a,int b){
    return (a+b);
}
int sum (int a ,int b,int c){
    return (a+b+c);

}
// calculate circumference of circle
int circle (int r){
    return (2*3.14*r);
}
// calculating area of circle.
int circle (int l,int w){
    return(l*w);
}
// volume of cube.
int volume (int x){
    return(x*x*x);
}
int main(){
    cout<<"the sum of 2 and 3 is :"<<sum(2,3)<<endl;
    cout<<"the sum of 2 ,3 and 5 is :"<<sum(2,3,5)<<endl;
    cout<<"the circumference of circle is :"<<circle(2)<<endl;
    cout<<"the  area of circle is :"<<circle(2,3)<<endl;
    cout<<"the  volume of cube is :"<<volume(2)<<endl;
    return 0;
}