#include<iostream>
using namespace std;
int main(){
    int marks[3]={12,34 ,56,};


    //BY USING ARRAY ONLY.
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    marks[2]=8888;
    cout<<marks[2]<<endl;
       

    //BY USING LOOP+ARRAY.
    for (int i = 0; i < 3; i++)
    {
        cout<<"The value of "<<i<<"is"<<marks[i]<<endl;
    }
    
    return 0;
}