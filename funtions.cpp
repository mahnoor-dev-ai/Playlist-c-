#include <iostream>
using namespace std;
// this is funtion prototype
int sum(int a, int b);

int main()
{

    int a, b;
    cout << "Enter 1st number:";
    cin >> a;
    cout << "Enter 2nd number:";
    cin >> b;
    cout << "the sum is:" << sum(a, b);
    // a and b are actual parameters
    return 0;
}
int sum(int a, int b)
{
    // here a and b are formal parameters
    int c = a + b;
    return c;
}