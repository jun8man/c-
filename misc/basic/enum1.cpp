#include <iostream>

using namespace std;

enum COMPARE
{
    LESSTHAN    = 0,
    EQUALTO     = 1,
    GREATERTHAN = 2
};

COMPARE compare(int a, int b)
{
    return (a < b) ? LESSTHAN :
           (a > b) ? GREATERTHAN : EQUALTO;
}

bool compare()
{
    int a, b;

    cout << "Pleas input 2 number." << endl;
    cout << "1st > ";
    cin >> a;
    cout << "2nd > ";
    cin >> b;

    if (a == -1)
    {
        return false;
    }

    switch(compare(a, b))
    {
        case LESSTHAN:
            cout << a << " is less than " << b << "." << endl;
            break;
        case EQUALTO:
            cout << a << " is same as " << b << "." << endl;
            break;
        case GREATERTHAN:
            cout << a << " is greater than " << b << "." << endl;
            break;
        default:
            cout << "error. your input was something wrong." << endl;
            break;
    }
    return true;
}


int main(int argc, char const *argv[])
{
    while(compare());
    return 0;
}
