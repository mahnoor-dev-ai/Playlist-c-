#include<iostream>
using namespace std;
//Inline funtion is only used for small  operations .
//  But not any change with inline but save our memory from over loading.
//Inline funtion is not  used for static variables .
inline int product(int a,int b){
    return a*b;
}
    
int main(){
    int a,b;
    cout<<"enter a and b:"<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is:"<<product(a,b)<<endl;
    cout<<"The product of a and b is:"<<product(a,b)<<endl;
    cout<<"The product of a and b is:"<<product(a,b)<<endl;
    cout<<"The product of a and b is:"<<product(a,b)<<endl;


    return 0;
}