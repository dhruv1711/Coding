#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;
class shop
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }

    void printdata()
    {
        cout << "The value of item number " << id << " is " << price << endl;
    }
};

int main()
{
    shop *ptr = new shop[3];
    for (int i = 0; i < 3; i++)
    {
        int p, q;
        cout << "enter item id and price ";
        cin >> p;
        cin >> q;
        ptr->setdata(p, q);
        cout << "===========================================================" << endl;
        ptr->printdata();
        ptr++;
    }

    return 0;
}