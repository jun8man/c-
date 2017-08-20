#include <iostream>

#define SIZE_OF_ARRAY(array)    sizeof (array) /sizeof *(array)

using std::cout;
using std::endl;

struct Student
{
    char name[16];
    int jananese, math, english;
};

// 構造体はデータ量が多いので参照渡しがよい.
// 値渡しにすると構造体がコピーされてしまう.
void display_refer(const Student& student)
{
    cout << "[display_refer]" << endl
         << "name: " << student.name << endl
         << "Japanese: " << student.jananese << ", "
         << "math: " << student.jananese << ", "
         << "english: " << student.jananese << endl;
}

// ポインタで渡す案もあり.
void display_pointer(const Student* student)
{
    cout << "[display_pointer]" << endl
         << "name: " << student->name << endl
         << "Japanese: " << student->jananese << ", "
         << "math: " << student->jananese << ", "
         << "english: " << student->jananese << endl;
}

int main(int argc, char const *argv[])
{
    Student student[] = {
        {"Junya", 73, 98, 86},
        {"Kana", 90, 92, 100},
        {"Toma", 100, 100, 100}
    };

    /*
        cだと変数宣言時も"struct"を書かないといけない.
        sturct Student student[] = {
            {"Junya", 73, 98, 86},
            {"Kana", 90, 92, 100},
            {"Toma", 100, 100, 100}
        };

        もし"typedef"で宣言していれば大丈夫.変数宣言時の"struct"は省略できる.
        typedef struct Student
        {
            char name[16];
            int jananese, math, english;
        }Student;
        cでもc++でも使えるので、互換性を考えるとこっちのほうがいいのかも？！.
    */

    for (int i = 0; i < SIZE_OF_ARRAY(student); ++i)
    {
        display_refer(student[i]);
        display_pointer(&student[i]);
    }
    return 0;
}
