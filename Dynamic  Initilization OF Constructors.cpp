#include<iostream>
#include<cmath>
using namespace std;
class bankdeposit{
 int principal;
 int years;
 float intrestrate;
 float returnvalue;
  public:
  bankdeposit(){}
  bankdeposit(int p, int y, float r){
      principal = p;
      years = y;
      intrestrate = r;
      returnvalue=principal;
     for (int i = 0; i < y; i++)
     {
        returnvalue  =  returnvalue * (1+r);
     }
  }
  bankdeposit(int p, int y, int r){
      principal = p;
      years = y;
      intrestrate = float(r)/100;
      returnvalue=principal;
      for (int i = 0; i < y; i++)
     {
        returnvalue  =  returnvalue * (1+intrestrate);
     }
  }
  void  show(){
     cout<<"Your principal value is:"<<principal<<
     "and returnvalue  after  "<<years <<"years  is :"<<returnvalue<<endl; 
  }

};
int main(){
     bankdeposit b1 ,b2;
     int p ,y ;
     float  r;
     int  R;
        
     cout<<"Enter  the  value  of p , y and  r :"<<endl;
     cin>>p>>y>>r;
     b1=bankdeposit( p, y ,r);
     b1.show();


     cout<<"Enter  the  value  of p , y and  R:"<<endl;
     cin>>p>>y>>R;
     b2=bankdeposit(p, y ,r);
     b2.show();

    
    return 0;
}