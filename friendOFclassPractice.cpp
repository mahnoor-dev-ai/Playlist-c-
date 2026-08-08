#include <iostream>
using namespace std;
class employee
{
public:
    int salary;
    int id;

    void setdata(void)
    {
        cout << "enter the salary :" << endl;
        cin >> salary;
    }
    void getdata(void)
    {
        cout << "enter the id :" << endl;
        cin >> id;
    }
};

int main()
{
    employee info;
    info.setdata();
    info.getdata();
    cout << "your salary is" << info.salary << "and id is" << info.id << endl;

    return 0;
}