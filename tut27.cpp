#include <iostream>
using namespace std;
class complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumcompcomplex(complex, complex);
    int sumrealcomplex(complex, complex);
};
class complex
{
public:
    int a;
    int b;
    int sumcompcomplex(complex, complex);
    int sumrealcomplex(complex, complex);
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
        
    }
};
int calculator::sumcompcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumrealcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex o1, o2;
    o1.setdata(1, 9);
    o2.setdata(9, 1);
    calculator calc;
    int res = calc.sumcompcomplex(o1, o2);
    cout << "The complex part of o1 and o2 is :" << res<< endl;
    res = calc.sumrealcomplex(o1, o2);
    cout << "The real part of o1 and o2 is :" << res<< endl;
    return 0;
}