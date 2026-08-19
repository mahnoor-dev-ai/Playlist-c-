#include<iostream>
using namespace std;

class employee {
public:
    int ID;
    
    float salary;

    employee(int inpID) {
       
        ID = inpID;
        salary = 5788;
    }
};
class programmer : public employee
{
public:
    programmer(int inpID) : employee(inpID) {
        ID = inpID;
    }

    int codelanguage = 78;
    void getdata(){
        cout<<ID<<endl;
    }
};

int main() {
    employee mahnoor(1), amina(2);
    cout << mahnoor.salary << endl;
    
    cout << amina.salary << endl;
    
    programmer skillF(2344);
    cout<<skillF.ID<<endl;

    cout<<skillF.codelanguage<<endl;
    skillF.getdata();

    return 0;
}