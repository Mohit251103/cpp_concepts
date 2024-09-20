#include<bits/stdc++.h>
using namespace std;

// bitwise operations practice
int main(){
    int x;
    cin >> x;

    for(int i=3; i>=0; i--){
        if((x & (1<<i)) != 0) cout << 1;
        else cout << 0;
    }
    cout << endl;
    return 0;
}