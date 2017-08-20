#include <stdio.h>

int strcnt(const char *path, int letter);

int main(int argc, char const *argv[])
{
    char path[] = "C:/Program Files/Robert/BH/BH.exe";

    printf("ファイル %s は、 %d 重のフォルダに入っています。\n", path, strcnt(path, '/') - 1);
    return 0;
}

int strcnt(const char *path, int letter)    // 参照先が定数になる. ポインタを定数にしたいときは char *const path とすればよい.
{
    int num = 0;
    while(*path)
    {
        if (*path == letter)
        {
            num++;
        }
        path++;
    }
    return num;
}
