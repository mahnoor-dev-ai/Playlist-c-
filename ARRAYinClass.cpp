#include <iostream>
using namespace std;
class Pizza99
{
    int itemId[80];
    int itemprice[80];
    int counter;

public:
    void setprice(void);
    void displayprice(void);
    void initcounter(void);
};

void Pizza99 ::setprice()
{
    cout << "Enter the id of item  " << counter + 1 << endl;
    cin >> itemId[counter];

    cout << "enter the price of item  " << endl;
    cin >> itemprice[counter];
    counter++;
}
void Pizza99 ::displayprice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with ID " << itemId[i] << "is" << itemprice[i] << endl;
    }
}
void Pizza99::initcounter()
{
    counter = 0;
}
int main()
{
    Pizza99 meal;
    meal.initcounter();
    meal.setprice();
    meal.setprice();
    meal.setprice();
    meal.setprice();
    meal.setprice();
    meal.setprice();

    meal.displayprice();
    return 0;
}