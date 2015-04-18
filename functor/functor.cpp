/**
 * functor sample.
 *
 * [20150418]
 *
 * 演算子のオーバーロードの中でも、特に()演算子をオーバーロードしたものを
 * 関数オブジェクト(ファンクタ)と呼ぶらしい.
 * operatorというキーワードを使うので関数オブジェクトはoperator()()と表される.
 * というわけで単なる演算子のオーバーロードなので、C++標準ライブラリの機能というわけではない.
 * がしかし、C++の標準ライブラリの中でよく使われている.
 *
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

// オブジェクトというくらいなのでclassが必要ですよね.
class My_functor
{
public:
  My_functor()
  {
    m_x   = 0;
    m_y   = 0;
    std::cout << "constractor" << m_x << m_y << std::endl;
  }
  My_functor(int x, int y) : m_x(x), m_y(y)
  {
    std::cout << "constractor(" << m_x << ", " << m_y << ")" << std::endl;
  }
  ~My_functor()
  {
    std::cout << "destractor" << m_x << std::endl;
  }

  // これが関数オブジェクト.
  void operator () (int num)
  {
    std::cout << "operator" << num << std::endl;
  }

  // これはただの演算子のオーバーロード.
  My_functor operator + (const My_functor& rhs)
  {
    return My_functor(m_x + rhs.m_x, m_y + rhs.m_y);
    //std::cout << "operator" << num << std::endl;
  }

private:
  int m_num;
  int m_x;
  int m_y;
};

template<typename T_C_Add>
class Add
{
public:
  Add()
  {
    std::cout << "constractor(Add)" << std::endl;
  }
  ~Add()
  {
    std::cout << "destractor(Add)" << std::endl;
  }
  T_C_Add operator()(T_C_Add a, T_C_Add b)
  {
    return a + b;
  }
};

template<typename T_C_Sub>
class Sub
{
public:
  Sub()
  {
    std::cout << "constractor(Sub)" << std::endl;
  }
  ~Sub()
  {
    std::cout << "destractor(Sub)" << std::endl;
  }
  T_C_Sub operator()(T_C_Sub a, T_C_Sub b)
  {
    return a - b;
  }
};

template<typename T_F>
T_F calc(T_F a, T_F b, T_F f)
{
  return f(a, b);
}

int main(int argc, char const *argv[])
{
  for (int i = 0; i < 5; ++i)
  {
    My_functor()(i);
  }

  My_functor()(1);
  My_functor obj1(1, 2);
  My_functor obj2(2, 3);
  My_functor obj3 = obj1 + obj2;

  Add<int>          add_i;
  Add<std::string>  add_s;
  Sub<double>       sub_d;

  std::cout << add_i(10, 20) << std::endl;
  std::cout << add_s("A", "C") << std::endl;
  std::cout << sub_d(1.5, 1) << std::endl;

  return 0;
}