#ifndef __INTARRAY_H_INCLUDED__
#define __INTARRAY_H_INCLUDED__
class IntArray
{
public:
    IntArray(const int num_of);
    ~IntArray();
    
    int GetIndex(const int index);
    void SetValue(const int index, const int value);

private:
    void CheckIndex(const int index);

    int* m_p_num;   // 動的配列.
    int  m_num_of;  // 配列の要素数.
};

#endif