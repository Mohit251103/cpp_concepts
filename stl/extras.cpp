#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "123";
    do{
        cout << s << endl;
    }while(next_permutation(s.begin(), s.end())); // to print the permutaion of a string

    // max and min element

    vector<int> v = {1,2,3,3,4};
    cout << *max_element(v.begin(), v.end()) << endl;
    cout << *min_element(v.begin(), v.end()) << endl;

    return 0;
}