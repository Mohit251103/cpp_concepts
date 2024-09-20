#include<bits/stdc++.h>
using namespace std;
class Human{
    private:
        int height;
        int weight;

    public:

        Human(int h, int w){
            height = h;
            weight = w;
        }

        void setHeight(int h){
            height = h;
        }

        int getHeight(){
            return height;
        }

        void setWeight(int w){
            weight = w;
        }

        int getWight(){
            return weight;
        }
};

int main(){
    Human Rohan = Human(166,66);

    // Rohan.setHeight(166);
    cout << Rohan.getHeight() << endl;
    // Rohan.setWeight(66);
    cout << Rohan.getWight() << endl;

    return 0; 
}

// In C++ only one constructor per class is allowed .