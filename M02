#include <iostream>
#include <math.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russia");
    double S; float A; short N;
    cout << "Введите количество сторон" << endl;
    cin >> N;
    cout << "Введите длину сторон" << endl;
    cin >> A;
    if(N < 3)
        cout << "Не возможно с таким количеством сторон";
    else if(A <= 0)
        cout << "Не возможно с таким значение длины";
    else
        cout << "Площадь " << N << " угольника = " << (S = ((A * N) * (A / (2 * tan((180/N) * (3.1415 / 180))))) / 2);
    return 0;
}
