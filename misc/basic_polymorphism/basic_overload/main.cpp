/**
 * @brief ポリモーフィズムの基礎.
 */

#include <iostream>
#include "calc.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Calc* p_calc_1;
    Calc* p_calc_2;
    p_calc_1 = new Calc();
    int a = 1;
    int b = 2;
    p_calc_2 = new Calc(a, b);
    cout << 3 << " + " << 4 << " = " << p_calc_1->add(3, 4) << endl;
    cout << p_calc_2->get_lhs() << " + " << p_calc_2-> get_rhs() << " = " << p_calc_2->add() << endl;
    delete p_calc_1;
    delete p_calc_2;
    return 0;
}
