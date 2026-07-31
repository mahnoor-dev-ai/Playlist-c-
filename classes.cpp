#include<iostream>
using namespace std;
struct info 
{
   string meal;
   string nickname;
   float height;
   char favchar;
};

int main(){
    struct info zee;
    zee.height=5.5;
    zee.favchar='H';
    zee.meal="pizza";
    zee.nickname="jarey";
    cout<<"The favourite chaacter of zee is:"<<zee.favchar<<endl;
    cout<<"The meal  of zee is:"<<zee.meal<<endl;
    cout<<"The  nickname  of zee is:"<<zee.nickname<<endl;
    cout<<"The   height of zee is:"<<zee.height<<endl;
    
        

    


    return 0;
}