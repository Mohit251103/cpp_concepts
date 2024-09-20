#include<iostream>
using namespace std;
// cout - << (insertion operator)
// cin - >> (extraction operator)

int main(){
    string s;
    // cin >> s ;
    getline(cin >> ws, s); // cin >> ws this here is done to eliminate any newline or space character which is present in buffer before user input
    // getline is used to accepts full string including space
    cout << s << " Whats up " << endl; 
    return 0;
}