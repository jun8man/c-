#include "stdio.h"

int main(int argc, char const *argv[])
{
    unsigned int i, x = 4;
    for (i = 1; i; i <<= 1)
    {
        if (x & i)
        {
            printf("%d の %d bit目は 1 である。\n", x, i);
        }
    }
    return 0;
}
