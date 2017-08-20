#include <iostream>

using namespace std;

enum COMPARE
{
    LESSTHAN    = 0,
    EQUALTO     = 1,
    GREATERTHAN = 2
};

COMPARE compare(int a, int b)
{
    return (a < b) ? LESSTHAN :
           (a > b) ? GREATERTHAN : EQUALTO;
}

bool compare()
{
    int a, b;

    cout << "Pleas input 2 number." << endl;
    cout << "1st > ";
    cin >> a;
    cout << "2nd > ";
    cin >> b;

    if (a == -1)
    {
        return false;
    }

    // ""に囲まれた文字列をリテラル文字列と呼ぶ.
    // リテラル文字列は静的データなので、寿命はプログラム開始から終了まで.
    // ポインタにリテラル文字列を代入すると,
    // ポインタにはそのリテラル文字列へのアドレスが代入される.
    // アドレスが格納されているのでリテラル文字列は直接書き換えられてしまう.
    // それを避けるために const を付けている.
    // 毎回関数に入るたび初期化されるのも無駄なので static をつけている.
    static const char* p_result[] = {
        "1st is smaller than 2nd.",
        "Both number is same.",
        "1st is greater than 2nd."
    };
    // ちなみに配列をリテラル文字列で初期化した場合は,
    // その配列はリテラル文字列を直接指すわけではない.
    // char str[] = "foo.";
    // 単に「配列で初期化されるだけ」, 下記と一緒.
    // char str[] = { 'f', 'o', 'o', 0, };

    cout << p_result[compare(a, b)] << endl;
/*
    // ポインタを使わないパターンだと同じようなコードを書かないといけない.
    switch(compare(a, b))
    {
        case LESSTHAN:
            cout << a << " is less than " << b << "." << endl;
            break;
        case EQUALTO:
            cout << a << " is same as " << b << "." << endl;
            break;
        case GREATERTHAN:
            cout << a << " is greater than " << b << "." << endl;
            break;
        default:
            cout << "error. your input was something wrong." << endl;
            break;
    }
*/
    return true;
}


int main(int argc, char const *argv[])
{
    while(compare());
    return 0;
}
