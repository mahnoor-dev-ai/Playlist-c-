#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter the ID:"<<endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "This is member # "<<count<<" and ID  is: "<<id<<endl;
       
    }

    
};
int employee ::count=0;

int main()
{
    employee mahnoor, amina, aniba;
    mahnoor.setdata();
    mahnoor.getdata();

    amina.setdata();
    amina.getdata();

    aniba.setdata();
    aniba.getdata();

   
    return 0;
}