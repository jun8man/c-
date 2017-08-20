/**
 * [file]   basic_class.h
 * [brief]  クラスの基礎.
 */

#ifndef _BASIC_CLASS_H_
#define _BASIC_CLASS_H_

class BasicClass
{
public:
    BasicClass();
    BasicClass(const int num);
    ~BasicClass();     // 継承する気はないのでNo Virtual.
    void set(const int num);
    int get();
private:
    int m_num;
    char* m_str;
};

#endif  // _BASIC_CLASS_H_