#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }

    complex(int s, int t)
    {
        a = s;
        b = t;
    }

    complex(int s)
    {
        a = s;
        b = 0;
    }

    complex()
    {
        a = 0;
        b = 0;
    }

    void printdata()
    {
        cout << "Your complex number is :" << a << "+" << b << "i" << endl;
    }
};

int main()
{
    complex c1(2, 9);
    c1.printdata();

    complex c2(8);
    c2.printdata();

    complex c3(3);
    c3.printdata();

    complex c4;
    c4.printdata();

    return 0;
}