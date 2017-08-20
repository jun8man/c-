#include <iostream>
#include <memory.h>
#include <process.h>
#include <cstdlib>
#include "int_array.h"

using namespace std;

IntArray::IntArray(const int num_of)
{
    m_p_num = new int[num_of];
    if(m_p_num == NULL)
    {
        m_num_of = 0;
    }
    else
    {
        m_num_of = num_of;
        memset(m_p_num, 0, m_num_of * sizeof *m_p_num);
    }
    cout << "Constructor was jsut called."
         << "The number of factor is " << m_num_of << "." << endl;
}

IntArray::~IntArray()
{
    if(m_p_num != NULL)
        delete [] m_p_num;
    cout << "Destructor was jsut called."
         << "The number of factor was " << m_num_of << "." << endl;
}

int IntArray::GetIndex(const int index)
{
    CheckIndex(index);
    return m_p_num[index];
}

void IntArray::SetValue(const int index, const int value)
{
    CheckIndex(index);
    m_p_num[index] = value;
}

void IntArray::CheckIndex(const int index)
{
    if((unsigned int)index < (unsigned int)m_num_of)
        return;
    cout << "index is something wrong." << endl
         << "index number is " << index << endl;
    exit(1);
}