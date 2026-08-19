#include <iostream>
using namespace std;
class base
{
    int data1;//data1 is default value which is  private.

public:
    int data2;
    int setdata();
    int displaydata1();
    int displaydata2();
};
int base::setdata(void)
{
    data1 = 100;
    data2 = 200;
}
int base ::displaydata1()
{
    return data1;
}
int base ::displaydata2()
{
    return data2;
}

class derived : public base
{
    int data3;

public:
    int process();
    int display();
};
int derived ::process(void)
{
    data3 = data2 * displaydata1();
}
int derived ::display()
{
    cout << "The value of  1 is :" << displaydata1() << endl;
    cout << "The value of  2 is :" << data2 << endl;
    cout << "The value of  3 is :" << data3 << endl;
}
int main()
{
    derived der;
    der.setdata();
    der.process();
    der.display();

    return 0;
}