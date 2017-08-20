#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    extern int a;

    Func();
    a = 5;
    Func();

    return 0;
}