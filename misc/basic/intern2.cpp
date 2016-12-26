#include <iostream>

static int a = 9;

void func1()
{
    std::cout << "a(2) = " << a << std::endl;
}

void func2();

int main(int argc, char const *argv[])
{
    func1();
    func2();
    a = 5;
    func1();
    func2();
    
    return 0;
}
