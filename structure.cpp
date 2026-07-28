#include<iostream>
using namespace std;
struct baby
{
    string name;
    int id;
    char  favchar;

}; 


int main(){
    struct baby first;
    
         first.name ="hussain";
         first.id =123;
         first.favchar='H';
           cout<<"The name of baby is "<<first.name<<endl;
          cout<<"The ID  of baby is "<<first.id<<endl;
           cout<<"The favourite character of baby is "<<first.favchar<<endl;
    
    
    return 0;
}