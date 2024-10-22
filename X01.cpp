#include <iostream>

using namespace std;

bool check(string chess){
    char sb = chess[0]; //sb-столбец
    char rd = chess[1]; //rd-ряд
    if(chess.size() != 2)
        return false;
    return (sb >= 'a' & sb <= 'h') & (rd >= '1' & rd <= '8');
}

bool queen_hit(string a, string b){
    char a_sb = a[0];
    char a_rd = a[1];
    char b_sb = b[0];
    char b_rd = b[1];
    if(!check(a) || !check(b)){
        cout << "Error";
        return false;
    }
    if(a_sb == b_sb || a_rd == b_rd || abs(a_sb - b_sb) == abs(a_rd - b_rd))//проверка столбца и проверка ряда и диагонали
        return true; 
    return 0;
}


int main(){
    setlocale(LC_ALL, "Russian");
    string a, b;
    cin >> a;
    cin >> b;
    cout << queen_hit(a, b);
    return 0;
}
