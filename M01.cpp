#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russain");
    for(int i{2}; i<10; i++){
        for(int j{2}; j<10; j++)
            cout  << j*i << '\t';
    cout << '\v' << '\n';
    }
    return 0;
}
