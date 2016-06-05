/*
    To confirm initialization on Costructor.
 */

#include <iostream>
#include "testInitialization.hpp"

using namespace std;

int main()
{
    testInitialization testInit("hoge");
    testInit.test();
    return 0;
}
