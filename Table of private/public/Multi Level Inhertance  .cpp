#include<iostream>
using namespace std;
class student{
  protected:
  int roll_num;
  public:
  void set_roll_num(int);
  void get_roll_num(void);

};
void student::set_roll_num(int r){
    roll_num = r;

}
void student::get_roll_num(){
    cout<<"The Roll number is = "<<roll_num<<endl;

}
class marks:public student{
  protected:
  float physics;
  float  maths;
  public:
  void set_marks(float , float);
  void get_marks(void);

  
};
void  marks ::set_marks(float  m1 , float  m2){
 physics = m1;
 maths =  m2;
}
void  marks ::get_marks(){
    cout<<"The marks in physics is = "<<physics<<endl;
    cout<<"The marks in maths is = "<<maths<<endl;
 
}
class result : public marks{
   float  percetage;
    public:
    void display(){
        get_roll_num();
        get_marks();
        cout<<"The result is = "<<(maths+physics)/2<<"%"<<endl;
    }
};

int main(){
    result mahnoor ;
    mahnoor.set_roll_num(435);
    mahnoor.set_marks(90.0 , 99.0);
    mahnoor.display();

    return 0;
}