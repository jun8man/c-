#include <iostream>

#define SIZE_OF_ARRAY(array)    sizeof (array) /sizeof *(array)

using std::cout;
using std::endl;

struct Student
{
    char name[16];
    int jananese, math, english;
};

// 構造体は大きいので参照渡しがよい. 
// ポインタで渡す案もあり
void display(const Student& student)
{
    cout << "name: " << student.name << endl
         << "Japanese: " << student.jananese << ", "
         << "math: " << student.jananese << ", "
         << "english: " << student.jananese << endl;
}

int main(int argc, char const *argv[])
{
    Student student[] = {
        {"Junya", 73, 98, 86},
        {"Kana", 90, 92, 100},
        {"Toma", 100, 100, 100}
    };
    for (int i = 0; i < SIZE_OF_ARRAY(student); ++i)
    {
        display(student[i]);
    }
    return 0;
}
