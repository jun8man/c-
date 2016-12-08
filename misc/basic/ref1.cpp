#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    int a = 0;
    int &r = a;     // rとaは全く同じ. 同じ変数に別の名前を付けたような感じ.
/*
    定義の時点で必ず初期化が必要.
    何を参照していいのかわからないので、コンパイルエラーになる.
    ってことはヌルポチェックが不要ってことか！
    int &r2;
*/
    cout << "operation : r = a, a = 0" << endl;
    cout << "a = " << a << endl;
    cout << "r = " << r << endl;

    r = 100;    // rを変えるとaも変わっちゃう
    cout << "operation : r = 100" << endl;
    cout << "a = " << a << endl;
    cout << "r = " << r << endl;
/*
    途中で参照する変数を変更することはできない.
    int b = 1;
    r = b
*/
    cout << "address" << endl;
    cout << "&a = " << &a << endl;
    cout << "&r = " << &r << endl;
    return 0;
}
