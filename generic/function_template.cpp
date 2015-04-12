/**
 * évÊý¥Æ¥ó¥×¥ì©`¥È
 *
 * 2015/04/12
 */

#include <iostream>
#include <string>

using namespace std;

template<typename T>
T add(T x, T y){
  return x + y;
}

int main()
{
  cout << add<int>(2, 1)            << endl;    // 3
  cout << add<double>(2.5, 1.2)     << endl;    // 3.7
  cout << add<float>(2.5, 3.1)      << endl;    // 5.6
  cout << add<string>("ABC", "DEF") << endl;    // ABCDEF
}