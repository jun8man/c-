#include <iostream>

using namespace std;

class FooInt
{
public:
    FooInt();
    FooInt(int num);
    void Disp();

    int num_;
};

FooInt::FooInt()
{
    num_ = 0;
}

FooInt::FooInt(int num)
{
    num_ = num;
}

void FooInt::Disp()
{
    cout << num_ << endl;
}

int main(int argc, char const *argv[])
{
    FooInt a, b(100), c(40), d;
    a.Disp();
    b.Disp();
    c.Disp();
    d.Disp();
    return 0;
}