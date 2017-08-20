#include <iostream>
#include "int_array.h"

using namespace std;

void Viss(const int num)
{
    cout << "Viss : No." << num << endl;
}

IntArray a(10);

int main(int argc, char const *argv[])
{
    IntArray b(20);
    Viss(1);
    IntArray c(30);
    Viss(2);
    {
        IntArray d(40);
        Viss(3);
    }
    Viss(4);
    return 0;
}