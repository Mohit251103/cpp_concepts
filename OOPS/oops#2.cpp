#include <bits/stdc++.h>
using namespace std;

// friend class and function can access private and protected members of a class
class Vehicle
{
private:
    string type;
    int price;

public:
    Vehicle(string t, int p)
    {
        type = t;
        price = p;
    }

    friend class Car;
    friend void print();
};

class Car
{
public:
    void show()
    {
        Vehicle car = Vehicle("Sedan", 2500000);
        cout << car.type << endl;
        cout << car.price << endl;
    }

    static void greet(){
        cout << "hello" << endl;
    }
};

void print()
{
    Vehicle car = Vehicle("Sedan", 2500000);
    cout << car.type << endl;
    cout << car.price << endl;
}

int main()
{

    Car c = Car();
    c.show();
    print();
    Car::greet();
    return 0;
}