#include <iostream>

using std::cout;
using std::endl;

int a = 2;  // 実体.

void func() // 実体.
{
    cout << ::a << ":" << &::a << endl;
}