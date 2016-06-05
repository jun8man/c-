/*
    To confirm initialization on Costructor.
 */

#include <iostream>
#include <string>
#include "testClass.h"

using namespace std;

class testInitialization
{
public:
    testInitialization(string str):
        m_a(),  // 0.
        m_b(1),
        m_c(2),
        m_str(str),
        m_empty(),
        m_class()   // make instance.
    {
    }
    ~testInitialization()
    {
    }

    void test()
    {
        cout << m_a << endl << m_b << endl << m_c << endl << m_str << endl;
        if (m_empty != "")
        {
            cout << m_empty << endl;
        }
        else
        {
            cout << "empty" << endl;
        }
        m_class.testClassTest();
    }

private:
    int m_a, m_b, m_c;
    string m_str, m_empty;
    testClass m_class;
};
