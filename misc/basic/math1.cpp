#include <iostream>
#include <math.h>

using std::cout;
using std::endl;
using std::cin;

int main(int argc, char const *argv[])
{
    double a = 0;   // float 32bit(4byte、7桁), double&long double 64bit(8byte、15桁).
    double b = 0;   // 精度の観点からdoubleを使うのが基本.

    cout << "Please enter the length of the two sides sandwiching the right angle." << endl;
    cout << "1 > ";
    cin >> a;
    cout << "2 > ";
    cin >> b;
    cout << "The length of hypotenuse is..."
         << sqrt(a * a + b * b) << endl;
        return 0;
}
