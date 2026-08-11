#include<iostream>
#include<cmath>
using namespace std;
class point{
 int a;
 int b;
 public:
  void setpoint(int q,int w)
  {
    a=q;
    b=w;

  }
  void displaypoint(){
    cout<<"Enter X"<<endl;
    cin>>a;

    cout<<"Enter Y"<<endl;
    cin>>b;

  }
friend  void distance(point p1, point p2);
};
void distance(point p1, point p2)
{
    float d = sqrt(pow(p2.a - p1.a, 2) + pow(p2.b - p1.b, 2));

    cout << "Distance between two points = " << d << endl;
}
int main(){
    point p1,p2;
    cout<<"Enter 1st point :"<<endl;
    p1.displaypoint();

    cout<<"Enter 2nd  point :"<<endl;
    p2.displaypoint();
    distance(p1,p2);
    return 0;
}