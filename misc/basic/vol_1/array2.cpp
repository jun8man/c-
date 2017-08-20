#include <stdio.h>

#define SIZE_OF_ARRAY(array)    sizeof (array) /sizeof *(array)

int main(int argc, char const *argv[])
{
    char array[10];
    printf("array: %d\n", array);                   // arrayはarray[0]のアドレスと一致する！.
    for (int i = 0; i < SIZE_OF_ARRAY(array); ++i)
    {
        printf("&array[%d]: %d\n", i, &array[i]);
    }
    return 0;
}
