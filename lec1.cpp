//Arrays, Strings, Pointers: Basics, Memory Management (new, delete), References

#include<stdio.h>
#include<iostream>
using namespace std;

void increment(int &n) {
    n++;
}

int main(){

    int a = 10;
    int *p = &a;
    cout << p << endl;

    cout << *p << endl; //dereferencing - refering to the value at the location the pointer holds address of

    int b = 20;
    p = &b;
    cout << p << endl;
    cout << *p << endl;

    int** c = &p;
    cout << c <<  " " << &p << endl; 

    increment(a);
    cout << a << endl;

    return 0;
}