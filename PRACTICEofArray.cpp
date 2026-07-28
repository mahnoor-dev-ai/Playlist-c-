#include<iostream>
using namespace std;
int main(){
    int marks[5]={34,56,90,45,12};

//USING FOR LOOP.
    for (int i = 0; i <5; i++)
    {
       
        cout<<"the marks of "<<i<<" students  is :"<<marks[i]<<endl;
    }
    
    
//USING WHILE LOOP.
     int i=0;
     while (i<5)
     {
       cout<<"the marks of "<<i<<" students is :"<<marks[i]<<endl;
       i++;
     }
     
//USING DO WHILE LOOP.
        int i=0;
        do{
            cout<<"the marks of "<<i<<" students  is :"<<marks[i]<<endl;
            i++;
        }
        while (i<5);
       
        
    return 0;
}