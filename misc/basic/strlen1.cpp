#include <stdio.h>

void dispLength(const char* str);
int strlen(const char* str);

int main(int argc, char const *argv[])
{
    dispLength((const char*)"あいうえお");
    dispLength((const char*)"あかさたなはまやらは");
    dispLength((const char*)"");
    return 0;
}

void dispLength(const char* str)
{
    printf("文字列「%s」の長さは %d バイトです。\n", str, strlen(str));
}

int strlen(const char* str)
{
    int i;
    for (i = 0; str[i]; ++i);
    return i;
}
