#include <iostream>

int main()
{
    char c[400001];
    c[0] = 0x1;
    int i = 0;
    char t = c[i];
    bool ok = true;
    while (std::cin.get(c[i]) && ok)
    {
        if (c[i] == '(' || c[i] == '[' || c[i] == '{')
            i++;
        else
        {
            std::cout << "i: " << i << "\n";
            switch (c[i])
            {
            case ')':
                if (c[i - 1] != '(')
                    ok = false;
                else
                    i++;
                break;
            case ']':
                if (c[i - 1] != '[')
                    ok = false;
                else
                    i++;
                break;
            case '}':
                if (c[i - 1] != '{')
                    ok = false;
                else
                    i++;
                break;
            }
        }
    }
    if (ok)
        std::cout << "ano\n";
    else
        std::cout << "nie\n";
    return 0;
}