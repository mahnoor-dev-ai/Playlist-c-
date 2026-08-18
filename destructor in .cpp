#include <iostream>
using namespace std;
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constuctor is called for object numbers ." << endl;
    }
    ~num()
    {
        count--;
        cout << "This is the time when destuctor is called for object numbers ." << endl;
    }
};
int main()
{
    cout << "We are entering in main function ." << endl;
    cout << "Creating  object  number n1.";
    num n1;
    {
        cout << "We  are entered in block.";
        cout << "Creating  more  objects." << endl;
        num n2, n3;
        cout << "Existing  from  the  block. " << endl;
    }
    cout << "We are outside from the block." << endl;
    return 0;
}