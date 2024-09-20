#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> v1(5,1);
    v1.push_back(10);
    vector<int> v2(v1);
    v2.push_back(2);
    // v2(5,2);

    vector<int>::iterator it = v2.begin();

    // cout << *(it) << " ";
    for(vector<int>::iterator i = v2.begin() ; i!=v2.end(); i++){
        cout << *(i) << " ";
    }
    // while(it){
    //     it++;
    // }
    cout << endl;

    cout << v2.front() << " " << v2.back() << endl;
    cout << *(v2.begin()+5) << endl;

    v2.erase(v2.begin()+5, v2.end());
    for(vector<int>::iterator i = v2.begin() ; i!=v2.end(); i++){
        cout << *(i) << " ";
    }
    return 0;
}