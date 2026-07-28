#include <iostream>
using namespace std;
int c=45;

int main()
{ int a,b,c;
    
    cout<<"enter a value of a:"<<endl;
    cin>>a;
    cout<<"enter a value of b:"<<endl;
    cin>>b;
    c=a+b;
    cout<<"the value of c is :"<<c<<endl;
    cout<<"the value of global c is :"<<::c<<endl;
    

    return 0;
}

