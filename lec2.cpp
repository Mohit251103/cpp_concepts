#include<iostream>
#include<vector>
using namespace std;

// typedef vector<pair<int,int>> pairintlist_t;
// typedef - used for creating simpler aliases for long datatypes
// new identifier to existing datatype
// we can use "using" keyword which is more common now 
// typedef is used with legacy codebases

// using "using" keyword
using pairintlist = vector<pair<int,int>>;

int main(){

    pairintlist list;
    list.emplace_back(1,2);

    cout << list.size() << endl;
    for(auto p : list){
        cout << p.first << " " << p.second << endl;
    }
    return 0;

}