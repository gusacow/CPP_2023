#include <iostream>

using namespace std;

bool check(string chess){
    if(chess.size() != 2)
        return false;
    char sb = chess[0]; //sb-столбец
    char rd = chess[1]; //rd-ряд
    return (sb >= 'a' & sb <= 'h') & (rd >= '1' & rd <= '8');
}

bool queen_hit(string a, string b){
    if(!check(a) || !check(b)){
        cout << "Error";
        return false;
    }
    char a_sb = a[0];
    char a_rd = a[1];
    char b_sb = b[0];
    char b_rd = b[1];
    if(a_sb == b_sb) //проверка столбца
        return true; 
    if(a_rd == b_rd) //проверка ряда
        return true;
    if(abs((a_sb - 'a' + 1) - (b_sb - 'a' + 1)) == abs((a_rd - '0') - (a_rd - '0'))); //проверка диагонали
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
