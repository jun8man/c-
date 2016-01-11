/**
 * @brief ポリモーフィズムの基礎(オーバーライド).
 */

#include "sub.h"
#include <iostream>

using namespace std;

Sub::Sub()
{
}

Sub::~Sub()
{
}

void Sub::func()
{
    cout << "Sub" << endl;
}
