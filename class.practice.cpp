#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    string name;
    int fee;
    int marks;
    int Rollno;

    void setdata()
    {
        cout << "Enter your marks: ";
        cin >> marks;

        cout << "Enter your fee: ";
        cin >> fee;

        cout << "Enter your roll number: ";
        cin >> Rollno;

        cout << "Enter your name: ";
        cin >> name;
    }

    void displaydata()
    {
        cout << "\nYour roll number is: " << Rollno << endl;
        cout << "Your name is: " << name << endl;
        cout << "Your marks are: " << marks << endl;
        cout << "Your fee is: " << fee << endl;
    }
};

int main()
{
    student s1;

    // First take ALL data
    s1.setdata();

    // Then display ALL data together
    s1.displaydata();

    return 0;
}