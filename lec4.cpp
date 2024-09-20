#include<iostream>
#include<cmath>

using db = double;
using namespace std;
db hypotenuse(db p, db base){
    return sqrt(pow(p,2)+pow(base,2));
}

int main(){

    db perpendicular;
    db base;

    cout << "Enter the perpendicular of right triangle :";
    cin >> perpendicular;

    cout << "Enter the base of right triangle :";
    cin >> base;

    cout << "Hypotenuse : " << hypotenuse(perpendicular,base) << endl;

    return 0;
}