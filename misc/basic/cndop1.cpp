#include <iostream>

int main(int argc, char const *argv[])
{
    int num1 = 0;
    int num2 = 0;

    std::cout << "Input 2 values.\n" << std::endl;
    std::cout << "value1 >> ";
    std::cin >> num1;
    std::cout << "\nvalue2 >> ";
    std::cin >> num2;
    std::cout << "\nbigger one is... "
              << ((num1 > num2) ? num1 : num2) << "です。\n" << std::endl;
    return 0;
}
