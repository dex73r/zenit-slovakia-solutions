#include <iostream>
#include <string>

#include <vector>
#include <fstream>
#include <algorithm>

int main()
{
    // std::ifstream fin("in.txt");
    // if (!fin) return 1;
    std::string input = "010000";
    std::cin >> input;
    bool is_power = std::count(input.begin(), input.end(), '1') == 1;
    if (is_power)
        std::cout << "ANO\n";
    else
        std::cout << "NIE\n";
    int c = input.size() - 1;
    while (input[c] != '1')
        c--;
    std::cout << - c + input.size() - 1 << '\n';
    return 0;
}