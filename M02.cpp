#include <iostream>
#include <math.h>

using namespace std;

double get_square(float A, short N){
    double S;
    S = ((A * N) * (A / (2 * tan((180/N) * (3.1415 / 180))))) / 2;
    return S;
}

int main(){
    setlocale(LC_ALL, "Russia");
    float A; short N;
    cout << "Введите количество сторон" << endl;
    cin >> N;
    cout << "Введите длину сторон" << endl;
    cin >> A;
    if(N < 3)
        cout << "Не возможно с таким количеством сторон";
    else if(A <= 0)
        cout << "Не возможно с таким значение длины";
    else
        cout << "Площадь " << N << " угольника = " << get_square(A, N);
    return 0;
}
