#include <iostream>

using ull = unsigned long long;

int main()
{
    ull sum = 0, input = 0;
    while (std::cin >> input)
        sum += input;
    if (sum + 1 > sum)
        std::cout << sum + 1 << '\n';
    else std::cout << sum - 1 << '\n';
    return 0;
}