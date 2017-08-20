#include <iostream>
#include <stdio.h>

using namespace std;

#define FUNC    void func(const int x, const int y)
#define FUNC2(name)    void name(const int x, const int y)
#define NUM_FIBO    16
#define LOOP(val, times)    for(val = 0; val <= (times); val++)     // ()があるのは演算子の優先順位を明確にしたいから.

FUNC;
FUNC2(func2);

int main(int argc, char const *argv[])
{
    func(1, 2);
    func(158, 144);
    func2(1, 2);
    func2(158, 144);

    int i;
    int nFibo[NUM_FIBO] = {1, 1};
    LOOP(i, NUM_FIBO - 2){
        nFibo[i + 2] = nFibo[i] + nFibo[i + 1];
    }

    cout << "フィボナッチ数列の最初の " << NUM_FIBO << " 桁は、" << endl;
    LOOP(i, NUM_FIBO - 2){
        cout << nFibo[i] << ", ";
    }

    cout << nFibo[i] << " です。" << endl;

    return 0;
}

FUNC
{
    char result[50];
    sprintf(result, "%d + %d = %d", x, y, x + y);
    cout << result << endl;
}

FUNC2(func2)
{
    char result[50];
    sprintf(result, "%d * %d = %d", x, y, x * y);
    cout << result << endl;
}
