#include <stdio.h>

int main(int argc, char const *argv[])
{
    const int kuku_limit = 9;
    int kuku[kuku_limit][kuku_limit];

    for (int i = 1; i <= kuku_limit; ++i)
    {
        for (int j = 1; j <= kuku_limit; ++j)
        {
            kuku[i - 1][j - 1] = i * j;
        }
    }

    printf(" 1 2 3 4 5 6 7 8 9\n");

    for (int i = 1; i <= kuku_limit; ++i)
    {
        printf("%d ", i);
        for (int j = 1; j <= kuku_limit; ++j)
        {
            printf("%2d ", kuku[i - 1][j - 1]);
        }
        printf("\n");
    }

    return 0;
}