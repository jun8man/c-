/**
 * [file]   main.cpp
 * [brief]  クラスの基礎.
 */

#include <iostream>
#include "basic_class.h"

using namespace std;

int main(int argc, char const *argv[])
{
    // クラス化しているので複数のインスタンスを作っていろいろできちゃう.
    BasicClass obj1;
    BasicClass obj2(10);
    int num = 0;
    cout << "Please input any number as you like." << endl;
    cin >> num;

    obj1.set(num);
    cout << obj1.get() << endl;
    cout << obj2.get() << endl;

    return 0;
}