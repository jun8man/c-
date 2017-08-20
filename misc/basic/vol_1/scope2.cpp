#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    {
        int a = 0;
        cout << a << endl;
    }
    // cout << a << endl;       [error] 'a' is out of scope.
    return 0;
}