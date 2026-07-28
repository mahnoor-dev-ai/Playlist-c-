#include<iostream>
using namespace std;
int main(){
    int marks[4]={12,45,67,90};
    int i=0;
//BY USING FOR LOOP IN ARRAY

    for (  i = 0; i < 4; i++)
    {
        cout<<"The value of"<<i<<"is"<<marks[i]<<endl;
    }

//BY USING while LOOP IN ARRAY

       while (i<4)
       {
        cout<<"The value of"<<i<<"is"<<marks[i]<<endl;
        i++;
       }
       
//BY USING do while LOOP IN ARRAY
    do{
        cout<<"The value of"<<i<<"is"<<marks[i]<<endl;
        i++;
    }
    while (i<4);

    return 0;
}