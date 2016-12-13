#include <iostream>

using std::cout;
using std::endl;

int a = 1;

int main(int argc, char const *argv[])
{
    cout << a << ":" << &a << endl;
    int a = 2;
    cout << a << ":" << &a << endl;
    {
        int a = 3;
        cout << a << ":" << &a << endl;
        cout << ::a << ":" << &::a << endl;     // '::'をつけるとグローバル変数を指すようになる.
    }
    cout << a << ":" << &a << endl;
    return 0;
}