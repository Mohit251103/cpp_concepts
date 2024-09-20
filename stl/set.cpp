#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s; // sorted and unique

    s.insert(7);
    s.insert(3);
    s.insert(5);
    s.insert(4);
    s.insert(4);

    for(int n : s){
        cout << n << " ";
    }
    cout << endl;

    cout << s.count(3) << endl; // count the occurence of 3
    s.erase(3); // erases element 3
    auto it = s.find(3); // gives the pointer to 3;

    return 0;
}
