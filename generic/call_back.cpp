/**
 * call back with function pointer.
 */

#include <iostream>

template <typename T>
T func1(const T val){
  std::cout << "func" << val << std::endl;
}

template <typename T>
T func2(const T val){
  std::cout << "func" << val*2 << std::endl;
}

template <typename T>
T func(const T val, T (* p_func)(const T)){
  p_func(val);
}

int main(int argc, char const *argv[])
{
  func(3.3, func1);
  func(3, func2);
  func("hoge", func1);
//  func("fuga", func2);  // compile error pattern.
  return 0;
}