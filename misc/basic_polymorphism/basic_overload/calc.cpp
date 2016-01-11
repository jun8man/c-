/**
 * @brief ポリモーフィズムの基礎.
 */

#include "calc.h"

Calc::Calc() : m_lhs(0), m_rhs(0)
{
}

Calc::Calc(int lhs, int rhs) : m_lhs(lhs), m_rhs(rhs)
{
}

Calc::~Calc()
{
}

int Calc::add()
{
    return m_lhs + m_rhs;
}

int Calc::add(int lhs, int rhs)
{
    return lhs + rhs;
}

int Calc::get_lhs()
{
    return m_lhs;
}

int Calc::get_rhs()
{
    return m_rhs;
}
