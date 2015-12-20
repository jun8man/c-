/**
 * @file    rat.cpp
 * @brief   静的メンバとインスタンスメンバのサンプル.
 */

#include "rat.h"
#include <iostream>

using namespace std;

int CRat::m_count = 0;

CRat::CRat() : m_id(0)
{
    m_id = m_count;
    m_count++;
}

CRat::~CRat()
{
    cout << "Delete Rat Id '" << m_id << "'" << endl;
    m_count--;
}

void CRat::showNum()
{
    // 静的メンバ関数では静的メンバ変数しか使用できない.
    // 通常のメンバ変数はインスタンス生成後にしか使えないため.
    cout << "Current Number of Rat is '" << m_count << "'" << endl;
}

void CRat::squeak()
{
    cout << "Rat Id '" << m_id << "' said 'chu-chu-'." << endl;
}