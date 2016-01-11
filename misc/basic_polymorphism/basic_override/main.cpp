/**
 * @brief ポリモーフィズムの基礎(オーバーライド).
 */

#include "super.h"
#include "sub.h"

int main(int argc, char const *argv[])
{
 Super* sp = new Super();
 Sub*   sb = new Sub();
 sp->func();
 sp->super_func();
 sb->func();
 sb->super_func();  // オーバーライドしていない. 継承元の関数をそのまま使う.
 delete sp;
 delete sb;
 return 0;
}
