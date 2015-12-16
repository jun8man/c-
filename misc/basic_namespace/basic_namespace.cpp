#include <iostream>
#include <string>

using namespace std;

int main(){
    cout << "programming in C++ Language" << endl;
    // 名前空間の宣言を抜いた場合にはこちら．
    // std::cout << "programming in C++ Language" << std::endl;

    int a;
    cin >> a;
    cout << "a = '" << a << "'" << endl;

    /**
     * Stringクラス.
     * charの配列を使っていろいろしていたCより遥かに楽ちん.
     * なぜならStringクラスが各種Operatorを実装しているから.
     * 例えば=で文字列の代入、==で文字列の比較、+で連結、>で文字列の大きさ比較など.
     */
    string pre_str = "Input string is '";
    cout << "Please input some string as you like => ";
    string str;
    cin >> str;
    cout <<  pre_str + str << "'." << endl;

    return 0;
}