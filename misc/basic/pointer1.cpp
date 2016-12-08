#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const int kBeginingOfShowa = 1926;
const int kEndOfShowa = 1989;

void changeToShowa(int *year);
void showa();

int main(int argc, char const *argv[])
{
    showa();
    showa();
    return 0;
}

void showa()
{
    int year;
    cout << "西暦を入力してください." << endl;
    cin >> year;

    changeToShowa(&year);

    if (year)
    {
        cout << "その年は昭和 " << year << " 年です." << endl;
    }
    else
    {
        cout << "その年は昭和ではありません." << endl;
    }
}

void changeToShowa(int *year)
{
    if (kBeginingOfShowa < *year && *year < kEndOfShowa)
    {
        *year = *year - 1925;
    }
    else
    {
        *year = 0;
    }
}
