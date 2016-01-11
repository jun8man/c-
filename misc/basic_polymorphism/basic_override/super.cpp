/**
 * @brief ポリモーフィズムの基礎(オーバーライド).
 */

#include "super.h"
#include "sub.h"
#include <iostream>

using namespace std;

Super::Super()
{
}

Super::~Super()
{
}

void Super::func()
{
    cout << "Super" << endl;
}

void Super::super_func()
{
    cout << "Super function" << endl;
}
