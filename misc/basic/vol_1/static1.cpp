#include <iostream>
#include <memory.h>
using namespace std;

/*
    Is address always unique?
*/
void SubAddressCheck()
{
    static int a = 0;
    int b = 0;
    cout << "&a = " << &a << endl;
    cout << "&b = " << &b << endl;
}

void SubAddressCheck2()
{
    cout << "in Sub2" << endl;
    SubAddressCheck();
}

void AddressCheck()
{
    cout << "Is address settled?" << endl;
    SubAddressCheck();
    SubAddressCheck2();
    SubAddressCheck();
}
/*
    Is initialization executed only once?
*/
void SubInitOnceCheck()
{
    static int a = 3;
    int b = 3;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    a++;
    b++;
}

void InitOnceCheck()
{
    cout << endl << "Was Initialized just onece?" << endl;
    SubInitOnceCheck();
    SubInitOnceCheck();
}
/*
    Is initialization executed as 0?
*/
void SubZeroInitCheck()
{
    static int a, b, c, d;
    cout << a << ", " << b << ", " << c << ", " << d << endl;
}

void SubZeroInitCheck2()
{
    int a, b, c, d;
    cout << a << ", " << b << ", " << c << ", " << d << endl;
}

void ZeroInitCheck()
{
    cout <<  endl << "Is initilaized as 0?" << endl;
    SubZeroInitCheck();
    SubZeroInitCheck2();
}
/*
    Is the static value guaranteed?
*/
void SubHoldValueCheck(int*& p_a, int*& p_b)
{
    static int a = 9;
    int b = 9;
    p_a = &a;
    p_b = &b;
}
/*
    to disturb memory.
*/
void SubHoldValueCheck2()
{
    int dummy[100];
    memset(dummy, 0, sizeof(dummy));
}

void HoldValueCheck()
{
    cout << endl << "Is held values?" << endl;
    int *p_a, *p_b;
    SubHoldValueCheck(p_a, p_b);
    SubHoldValueCheck2();
    cout << "*p_a = " << *p_a << endl;
    cout << "*p_b = " << *p_b << endl;
}


int main(int argc, char const *argv[])
{
    AddressCheck();
    InitOnceCheck();
    ZeroInitCheck();
    HoldValueCheck();
    return 0;
}