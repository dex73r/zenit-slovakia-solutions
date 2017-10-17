#include <iostream>
#include <string>

#include <vector>
#include <fstream>
#include <algorithm>

int main()
{
    // std::ifstream fin("in.txt");
    // if (!fin) return 1;
    int n, tmp;
    std::cin >> n;
    
    std::vector<int> data;
    data.reserve(n);
    for(int i = 0; i < n; ++i)
    {
        std::cin >> tmp;
        data.emplace_back(tmp);
    }
    std::sort(data.begin(), data.end());
    if (data[0] == 1 && data[n-1] == 4999)
        std::cout << "-1\n";
    else if (data[0] >= 2)
        std::cout << "1\n";
    else if (data[n-1] <= 4998)
        std::cout << "4999\n";
    else{
        std::cout << "unexpected\n";
    }
    return 0;
}