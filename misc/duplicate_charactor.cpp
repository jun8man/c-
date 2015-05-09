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
         * ぼくはこう書いた.
         */
        /*
        for (int j = i + 1; j < str.size(); j++)
        {
            if (str[i] == str[j]) return true;
        }
        */
       /**
        * 仲さんからはstlを使うと1行で書けると聞いてこちらを書いた.
        * setは重複を許さないため通常同じものをinsertしようとすると無視される.
        * 実際にはpair<iterator, bool>を返し、1番目は挿入した値へのIteratorで
        * 2番めは挿入が実際に行われたかどうかを示す.
        */
        if (!s.insert(str[i]).second) return true;
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