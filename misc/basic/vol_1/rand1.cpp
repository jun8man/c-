#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

inline void InitDice()
{
    return srand((unsigned int)time(NULL));
}

inline int Dice()
{
    return rand() % 6 + 1;
}

int main(int argc, char const *argv[])
{
    InitDice();
    for (int i = 0; i < 20; ++i)
    {
        cout << Dice() + Dice() << " ";
    }
    cout << flush;
    return 0;
}