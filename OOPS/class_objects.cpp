#include <iostream>
#include <cstring>
using namespace std;

class Car
{
public:
    char name[100];
    int engine;
    int price;
    Car()
    {
        cout << "Constructor called for object" << endl;
    }
    void print()
    {
        cout << name << " " << engine << " " << price << endl;
    }
};

int main()
{
    Car c;
    // c.name = "BMW\0";
    c.engine = 1500;
    c.price = 15;
    strcpy(c.name, "BMW");
    cout << c.engine << " " << c.price << " " << c.name << endl;
    c.print();
}