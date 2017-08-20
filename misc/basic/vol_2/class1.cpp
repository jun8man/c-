#include <iostream>

using namespace std;

#define ELEM(array) (sizeof (array) / sizeof *(array))

class Student
{
public:
    void Disp();

    char name_[20];
    int japanese_, math_, english_;
};

void Student::Disp()
{
    cout << "NAME : "     << name_     << endl
         << "JAPANESE : " << japanese_ << ", "
         << "MATH : "     << math_     << ", "
         << "ENGLISH : "  << english_  << endl;
}

int main(int argc, char const *argv[])
{
    Student students[] = {
        {"J", 50, 60, 70},
        {"K", 80, 60, 70},
        {"T", 90, 90, 100}
    };
    for (int i = 0; i < ELEM(students); ++i)
    {
        students[i].Disp();
    }
    return 0;
}