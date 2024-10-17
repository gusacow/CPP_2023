#include <iostream>

using namespace std;

double squared_sum(double a, double b){
    double sum, quadro;
    sum = a + b;
    return quadro = sum * sum;
}

int main(){
    setlocale(LC_ALL, "Russian");
    double a, b;
    cin >> a;
    cin >> b;
    cout << squared_sum(a, b);
    return 0;
}
