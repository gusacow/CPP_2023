#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    short a;
    string numbers[10] = {
        "Ноль", "Один", "Два", "Три", "Четыре", "Пять", "Шесть", "Семь", "Восемь", "Девять"
    };
    cout << "Введите цифру от 0-9" << endl;
    cin >> a; 
    if(a<0 || a>9)
        cout << "Ошибка";
    else
        cout << numbers[a];
    return 0;
}
