#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* 一次元版 */
    /*
    const int KUKU_LIMIT = 9;
    int       kuku[KUKU_LIMIT * KUKU_LIMIT];

    for (int i = 1; i <= KUKU_LIMIT; ++i)
    {
        for (int j = 1; j <= KUKU_LIMIT; ++j)
        {
            int pos = (j - 1) + (i - 1)*KUKU_LIMIT;
            kuku[pos] = i * j;
            printf("%d", kuku[pos]);
        }
        printf("\n");
    }
    */
    
    /* 二次元版 */
    const int KUKU_LIMIT = 9;
    int kuku[KUKU_LIMIT][KUKU_LIMIT];

    for (int i = 1; i <= KUKU_LIMIT; ++i)
    {
        for (int j = 1; j <= KUKU_LIMIT; ++j)
        {
            kuku[i - 1][j - 1] = i * j;
        }
    }
    printf("  1  2  3  4  5  6  7  8  9\n");

    for (int i = 1; i <= KUKU_LIMIT; ++i)
    {
        printf("%d", i);
        for (int j = 1; j <= KUKU_LIMIT; ++j)
        {
            printf("%2d ", kuku[i - 1][j - 1]);
        }
        printf("\n");
    }
}