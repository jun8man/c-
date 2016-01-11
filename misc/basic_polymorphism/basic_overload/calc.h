/**
 * @brief ポリモーフィズムの基礎(オーバーロード).
 * @remark ひとつでも引数ありコンストラクタを作った場合はデフォルトコンストラクタを省略できない.
 */

#ifndef _CALC_H_
#define _CALC_H_

class Calc
{
public:
    Calc();  // デフォルトコンストラクタ.
    Calc(int lhs, int rhs);  // コンストラクタのオーバーロード.
    ~Calc();
    int add();
    int add(int lhs, int rhs);  // addのオーバーロード.
    int get_lhs();
    int get_rhs();
private:
    int m_lhs;
    int m_rhs;
};
#endif
