/**
 * Check duplicate charactor
 *
 * [20150509] Junya
 */

#include <iostream>
#include <cstdio>
#include <string>
#include <set>

bool
is_there_ducplicate_charactor(const std::string& str)
{
    std::set<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        /**
         * Initial code.
         */
        /*
        for (int j = i + 1; j < str.size(); j++)
        {
            if (str[i] == str[j]) return true;
        }
        */
       /**
        * stlを使うと1行で書けると聞いたのでこんなのを考えた.
        * setは重複を許さないため通常同じものをinsertしようとすると無視される.
        * 実際にはpair<iterator, bool>を返し、1番目は挿入した値へのIteratorで
        * 2番めは挿入が実際に行われたかどうかを示す.
        *
        * ちょっと分かりにくいのでfindを使う手段を教わった.
        * findは要素があればそのIteratorを返す.無ければ終端を返すので、それを利用する.
        */
        if (s.find(str[i]) != s.end()) return true;
        s.insert(str[i]);
        std::cout << str[i] << std::endl;
    }
    return false;
}

int
main(int argc, char* argv[])
{
    if (argc != 2)
    {
        std::cout << "usage: a.exe [string]" << std::endl;
        return -1;
    }
    const bool ret = is_there_ducplicate_charactor(std::string(argv[1]));
    const std::string result = ret ? "yes" : "no";
    std::cout << result << std::endl;
    return 0;
}