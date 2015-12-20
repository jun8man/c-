/**
 * @file    rat.h
 * @brief   静的メンバとインスタンスメンバのサンプル.
 */

#ifndef _RAT_H_
#define _RAT_H_

class CRat
{
public:
    CRat();
    ~CRat();
    static void showNum();  // 静的メンバ関数.インスタンス生成前から存在する.
    void squeak();
private:
    int m_id;
    static int m_count;     // 静的メンバ変数.初期化はcpp側で行われる.インスタンスを生成する前から存在する.
};

#endif
