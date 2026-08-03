#include<iostream>
using namespace std;
class binary
{
string s;

    public:
  void read(void);
  void chk_bin(void);
  void ones_compliment(void);
  void dispaly(void);
}; 
void binary::read(void){
    cout<<"Entry a binary number:"<<endl;
    cin >>s;

}
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0'&& s.at(i)!='1'){
        cout<<"INCORRECT BINARY NUMBER."<<endl;
        exit (0);
        }
         
    }
    
}
void binary ::ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)

    {
     if( s.at(i)=='0')
    { 
     s.at(i)='1';
    }
     else{

     s.at(i)='0';
    }
}
    
}  

void binary::dispaly(void)
{
   cout<<"Displaying your binary number:"<<endl;
   for (int i = 0; i < s.length(); i++)
   {
      cout<<s.at(i);
   }
   cout<<endl;
}

int main(){
    binary d;
    d.read();
    d.chk_bin();
    d.dispaly();
    d.ones_compliment();
    d.dispaly();
    return 0;
}