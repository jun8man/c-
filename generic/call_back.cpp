/**
 * call back
 */

#include <iostream>

void func1(const int val){
  std::cout << "func" << val << std::endl;
  return;
}

void func2(const int val){
  std::cout << "func" << val*2 << std::endl;
  return;
}

void func(const int val, void (* p_func)(const int)){
  p_func(val);
}

int main(int argc, char const *argv[])
{
  func(3, func1);
  func(3, func2);
  return 0;
}