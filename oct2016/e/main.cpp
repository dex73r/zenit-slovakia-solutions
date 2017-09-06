#include <iostream>
#include <string>
//#include <fstream>

bool is_vowel(char const &c)
{
    static char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < (sizeof(vowels) / sizeof(char)); ++i)
    {
        if (c == vowels[i])
            return true;
    }
    return false;
}

int main()
{
    /* 
    std::ifstream fin("input.txt");
    if (!fin)
        return 1;
 */
    char a, last = 'a';
    int vowels = 0;
    while(std::cin.get(a))//while (fin.get(a))
    {
        if (last == 'i' && is_vowel(a))
        {             // ia, ie, iu
            last = a; // remember last
            continue; // ignore ia ie iu
        }
        if (is_vowel(a)) // a e i o u
            vowels++;
        last = a;
    }
    std::cout << vowels << '\n';
    return 0;
}