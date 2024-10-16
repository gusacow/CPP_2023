#include <iostream>

using namespace std;

int main(){
    for(short i{0}; i<=100; i++){
        if(i % 3 == 0){
            cout << i << endl;
        }
    }
}
