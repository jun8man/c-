/**
 * クラステンプレート
 *
 * 2015/04/12
 */

#ifndef _CALC_H_
#define _CALC_H_

template<typename T>
class Calculation
{
public:
  inline void set(const T n1, const T n2)
  {
    m_n1 = n1;
    m_n2 = n2;
  }

  inline T add() const
  {
    return m_n1 + m_n2;
  }

private:
  T m_n1;
  T m_n2;
};

#endif // _CALC_H_
