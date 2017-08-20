#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };
    int array_size_1 = sizeof(array) / sizeof(*array);
    int array_size_2 = sizeof(array[0]) / sizeof(*array[0]);
    for (int i = 0; i < array_size_1 ; ++i)
    {
        for (int j = 0; j < array_size_2; ++j)
        {
            printf("%d", array[i][j]);
        }
    }
}