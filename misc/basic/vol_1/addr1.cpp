#include <iostream>
#include <stdint.h>

using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    int a;
    int array_i[4];
    char b;
    char array_c[4];

    // アドレスの足し算.
    cout << "&a              =  " << (uintptr_t)&a                << endl;
    cout << "&a + 1          =  " << (uintptr_t)(&a + 1)          << endl;
    cout << "&array_i[1]     =  " << (uintptr_t)&array_i[1]       << endl;
    cout << "&array_i[1] + 1 =  " << (uintptr_t)(&array_i[1] + 1) << endl;
    cout << "&b              =  " << (uintptr_t)&b                << endl;
    cout << "&b + 1          =  " << (uintptr_t)(&b + 1)          << endl;
    cout << "&array_c        =  " << (uintptr_t)&array_c          << endl;
    cout << "&array_c + 1    =  " << (uintptr_t)(&array_c + 1)    << endl;

    return 0;
}
