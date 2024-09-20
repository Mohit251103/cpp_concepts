#include<bits/stdc++.h>
using namespace std;

// Encapsulation
// Encapsulating both data and methods together. Preventing direct access of data by other classes and functions and providing public getters and setters

class Animal{
    private:
        string category;

    public:
        void setCategory(string c){
            category = c;
        }

        string getCategory(){
            return category;
        }
};

// Abstraction 
// Hiding the implementation and only showing the essential details
// An abstract class can have a mix of pure virtual functions (which provide abstraction) and non-pure virtual or regular member functions (which provide some implementation).
// An interface in C++ is typically defined as an abstract class with only pure virtual functions (no data members or implementation), which allows classes to fully focus on abstraction.

// abstract classes cannot be instantiated directly

// Hardware abstract class(at least one virtual function)/ interface ( only virtual functions )
class Hardware{
    public:
        virtual void clickPhoto() = 0; // virtual functions
};

class Phone : public Hardware{ // Inheritance is private by default 
    public:
        void clickPhoto(){
            cout << "Photo clicked !! " << endl;
        }

};

// Inheritance
// Inheriting the properties and functions of parent class
class Base{
    int x;
    public:
        Base(int y){
            x=y;
        }

        void show(){
            cout << x << endl;
        }
};

class Derived: public Base{
    public:
        Derived(int x, int y) : Base( x ){
            cout << x << " " << y << endl; 
        }

};


// Polymorphism
// for overriding a function of parent class it must be defined as virtual function in parent
class Employee{
    public:
        string name;
        Employee(string name){
            this->name = name;
        }

        virtual void work(){ // virtual is necessary to override the data in child class
            cout << name << " : " << "Employee" << endl;
        }
};

class Developer : public Employee{
    public:
        Developer(string name):Employee(name){};

        void work(){
            cout << name << " : " << "Developer" << endl;
        }
};

int main(){

    // Encapsulation
    Animal gray;
    gray.setCategory("Dog");
    cout << gray.getCategory() << endl;

    // Abstraction
    Phone nokia;
    nokia.clickPhoto();

    //inheritance
    Derived d = Derived(1,2);
    d.show();

    //polymorphism
    Developer dev = Developer("Mohit");
    Employee* emp = &dev;
    emp->work();

    return 0;
}