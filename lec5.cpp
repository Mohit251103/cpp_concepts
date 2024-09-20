#include<iostream>
using namespace std;

// 'new' keyword is used to dynamically allocate memory into heap 

// A template is a construct that generates an ordinary type or function at compile time based on arguments the user supplies for the template parameters.
//T is a template parameter; the typename keyword says that this parameter is a placeholder for a type. When the function is called, the compiler will replace every instance of T with the concrete type argument that is either specified by the user or deduced by the compiler. The process in which the compiler generates a class or function from a template is referred to as template instantiation; minimum<int> is an instantiation of the template minimum<T>.

template<typename T>
T add(T a, T b){
    return a+b;
}

int main(){
    
    int n;
    cin >> n ;

    int *arr = new int[n];

    cout << add(1,2) << endl;
    cout << add(1.2,2.3) << endl;
    cout << add('a','b') << endl;

    return 0;
}


