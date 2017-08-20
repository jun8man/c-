#include <iostream>
#include <string.h>

using namespace std;

int Abs(int num_int)
{
    if(num_int < 0)
        return -num_int;
    return num_int;
}

double Abs(double num_double)
{
    if(num_double < 0)
        return -num_double;
    return num_double;
}

void DispAbs(int num_int, double num_double)
{
    cout << num_int << "'s absolute value is " << Abs(num_int) << endl;
    cout << num_double << "'s absolute value is " << Abs(num_double) << endl;
}

bool Input(int& num_int, double& num_double)
{
    cout << "Input integers > " << flush;
    cin >> num_int;
    if(num_int > 0 && num_int < 1)
    {
        cout << "Please input integers." << endl;
        return false;
    }
    cout << "Input decimals > " << flush;
    cin >> num_double;
    if(num_double <= -1 || num_double >= 1)
    {
        cout << "Please input decimals." << endl;
        return false;
    }
    return true;
}

bool IsContinue()
{
    char yes_or_no[] = "n";
    cout << "continue? [y/n]" << flush;
    cin >> yes_or_no;
    if(strcmp(yes_or_no, "n") == 0)
    {
        cout << "bye!" << endl;
        return false;
    }
    else if(strcmp(yes_or_no, "y") == 0)
    {
        return true;
    }
    else
    {
        IsContinue();
    }
    return true;
}

int main(int argc, char const *argv[])
{
    int num_int = 0;
    double num_double = 0;

    while(1)
    {
        if(Input(num_int, num_double))
            DispAbs(num_int, num_double);
        if (!IsContinue())
            break;
    }
}