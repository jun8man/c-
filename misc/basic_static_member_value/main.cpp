/**
 * @file    main.cpp
 * @brief   静的メンバとインスタンスメンバのサンプル.
 */

#include "rat.h"

int main(int argc, char const *argv[])
{
    CRat *r1 = new CRat();
    CRat *r2 = new CRat();
    CRat *r3 = new CRat();

    r1->squeak();
    r2->squeak();
    r3->squeak();

    delete r1;
    delete r2;
    CRat::showNum();
    delete r3;
    CRat::showNum();

    return 0;
}