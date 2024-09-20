#include<bits/stdc++.h>
using namespace std;

// user defined comparator
bool comp(pair<int,int> p1, pair<int,int> p2 ){
    if(p1.second > p2.second) return false;
    else return true;
}

int main(){

    vector<pair<int,int>> v;
    v.emplace_back(1,4);
    v.emplace_back(3,6);
    v.emplace_back(6,2);
    v.emplace_back(2,5);

    // I want to sort on the basis of second element in ascending order

    sort(v.begin(), v.end(), comp);

    for(auto x : v){
        cout << x.first << " " << x.second << endl; 
    }

    return 0;

}