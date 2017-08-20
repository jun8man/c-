#include <iostream>

using std::cout;
using std::endl;

static int a = 2;

static void func1()
{
    cout << "a(1) = " << a << endl;
}

void func2()
{
    func1();
}
