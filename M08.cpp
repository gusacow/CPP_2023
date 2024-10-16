#include <iostream>
#include <cmath>

using namespace std;

double get_angel(float a, float b, float c){
    double gradus;
    gradus = acos((pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2 * c * b));
    gradus = gradus * (180 / 3.1415);
    return gradus;
}

int main(){
    setlocale(LC_ALL, "Russia");
    float a, b, c;
    cout << "Введите длину a" << endl;
    cin >> a;
    cout << "Введите длину b" << endl;
    cin >> b;
    cout << "Введите длину c" << endl;
    cin >> c;
    if(a == 0 || b == 0 || c == 0 || a + b < c || a + c < b || b + c < a)
        cout << "Треугольника не существует";
    else
        cout << get_angel(a, b, c) << " градусов";
    return 0;
}
