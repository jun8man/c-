#include <iostream>

using namespace std;

void Func(int a = 0);
void Func2();

int main(int argc, char const *argv[])
{
    Func();
    Func2();
    Func();
    return 0;
}

void Func(int a)
{
    cout << &a << endl;
}

void Func2()
{
    Func();
}