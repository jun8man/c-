/**
 * @brief ポリモーフィズムの基礎(オーバーライド).
 */

#ifndef _SUB_H_
#define _SUB_H_

#include "super.h"

class Sub : public Super
{
public:
    Sub();
    ~Sub();
    void func();  // オーバーライドされた関数.
};

#endif  // _SUB_H_
