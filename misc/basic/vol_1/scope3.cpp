#include <iostream>

using namespace std;

int a = 1;

/*
    each address is different.
    the innermost variable is used at each scope.
*/
int main(int argc, char const *argv[])
{
    cout << a << " : " << &a << endl;
    int a = 2;
    cout << a << " : " << &a << endl;
    {
        int a = 3;
        cout << a << " : " << &a << endl;
        cout << ::a << " : " << &::a << endl;   // "::" means global variable.
    }
    cout << a << " : " << &a << endl;
    return 0;
}