#include <iostream>
using namespace std;
class B;
class A
{
    int val1;
    friend void exchange(A & , B & );

public:
    void setdata(int data)
    {
        val1 = data;
    }
    void displaydata(void)
    {
        cout << val1 << endl;
    }
};
class B
{
    int val2;
    friend void exchange(A & , B & );

public:
    void setdata(int data)
    {
        val2 = data;
    }
    void displaydata(void)
    {
        cout << val2 << endl;
    }
};
void exchange(A & a, B & b)
{
    int tmp = a.val1;
    a.val1 = b.val2;
    b.val2 = tmp;
}
int main()
{
    A o1;
    B o2;
    o1.setdata(45);
    o2.setdata(89);
    exchange(o1, o2);
    cout << "The value of A after exchanging is";
    o1.displaydata();
    cout << "The value of B  after exchanging is";
    o2.displaydata();
    return 0;
}