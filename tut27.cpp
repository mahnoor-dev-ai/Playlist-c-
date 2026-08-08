#include <iostream>
using namespace std;
class complex;

class calculator
{
    public:
    int add(int a, int b)
    {
        return( a+b);
    }
    int sumrealcomplex(complex, complex);
    int sumcompcomplex(complex, complex);
};
class complex {
    public:
    int a ;
    int b ;
     int friend sumrealcomplex(complex ,complex);
    int friend sumcompcomplex(complex ,complex);
    void setdata(int a1, int b1){       
        a=a1;
        b=b1;

    }
    void printnumber()
    {
        cout<<" Your complex number is "<<a<<"+"<<b<<"i"<<endl;
    }


};
int calculator ::sumrealcomplex(complex o1, complex o2){
    return (o1.a+o2.a);
}
int calculator ::sumcompcomplex(complex o1, complex o2){
    return (o1.b+o2.b);
}
int main()
{
    calculator calc;
    complex c1, c2;
    c1.setdata(3, 4);
    c2.setdata(1, 2);
    int result = calc.sumrealcomplex(c1, c2);
    cout << "Sum of real parts  of o1 and o2 is: " << result << endl;
    result = calc.sumcompcomplex(c1, c2);
    cout << "Sum of imaginary parts of o1 and o2 is: " << result << endl;
    return 0;
}