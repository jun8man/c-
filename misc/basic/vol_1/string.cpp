#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

// #define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))

void f(int x, int y);

int main(int argc, char const *argv[])
{
    char hello[] = "やぁ、こんちは";

    cout << "「" << hello << "」を文字コードに変えると、" << endl;

    // int length = ARRAY_LENGTH(hello);
    int length = strlen(hello);     // ヌルキャラクタは返ってこないので注意.
    cout << "length of string: " << length << endl;
    for (int i = 0; i < length; i++)
    {
        cout << "index:" << i << ", " << (int)(unsigned char)hello[i] << endl;
    }

    cout << "になります\n" << endl;

    f(1, 2);
    f(182, 144);

    return 0;
}

void f(int x, int y)
{
    char result[50];

    sprintf(result, "f(%d, %d) = %d", x, y, 2 * x + y);
    cout << result << endl;
}
