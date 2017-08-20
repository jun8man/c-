#include <iostream>
#include <string.h>

#define SIZE_OF_ARRAY(array)    sizeof (array) /sizeof *(array)

using std::cout;
using std::endl;

// void display(int array[], int size)
void display(int *array, int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << "index:" << i << "val: " << array[i] << endl;
    }
}

int main(int argc, char const *argv[])
{
    int n[5];
    for (int i = 0; i < SIZE_OF_ARRAY(n); ++i)
    {
        n[i] = i * 5;
    }
    display(n, SIZE_OF_ARRAY(n));
    return 0;
}
