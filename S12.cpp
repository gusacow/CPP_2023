#include <iostream>

using namespace std;

int main(){
    short i{0}, j{0};
    while(i<=1000){
        i += 4;
        if(i % 7 == 0){
            j += i;
            cout << j << endl;
        }
    }
}
