#include <stdio.h>

#define SIZE_OF_ARRAY(array)    sizeof (array)/sizeof *(array)
#define LOOP(val, times)          for(val = 0; val < (times); val++)

void displayAddress(int *pointer, int size);

int main(int argc, char const *argv[])
{
    int array[10];
    printf("array         : %d\n", array);
    int i;
    LOOP(i, SIZE_OF_ARRAY(array))
    {
        printf("&array[%d]:    : %d\n", i, &array[i]);
    }
    printf("\n");
    displayAddress(array, SIZE_OF_ARRAY(array));
    return 0;
}

void displayAddress(int *pointer, int size)
{
    printf("pointer       : %d\n", pointer);
    int i;
    LOOP(i, size)
    {
        printf("&pointer[%d]:  : %d\n", i, &pointer[i]);
    }
}
