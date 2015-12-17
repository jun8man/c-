/**
 * [file]   basic_class.cpp
 * [brief]  クラスの基礎.
 */

#include <iostream>
#include "basic_class.h"

using namespace std;

BasicClass::BasicClass() : m_num(0)
{
    cout << "Constructor was called." << endl;
}

BasicClass::BasicClass(const int num) : m_num(num)
{
    cout << "Constructor(num) was called." << endl;
}

BasicClass::~BasicClass()
{
    cout << "Destructor was called." << endl;
}

void BasicClass::set(const int num)
{
    m_num = num;
}

int BasicClass::get()
{
    return m_num;
}
