/**
 * クラステンプレート
 *
 * 2015/04/12
 */

#include <iostream>
#include <string>
#include "calc.h"

using namespace std;

int main(int argc, char const *argv[])
{
  Calculation<int>    i1;
  Calculation<string> i2;

  i1.set(1,2);
  i2.set("ABC", "DEF");

  cout << i1.add() << endl << i2.add() << endl;
  return 0;
}