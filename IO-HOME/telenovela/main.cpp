#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int n,e;
    std::cin >> n >> e;
    std::vector<int> data;
    data.reserve(n);
    static int tmp = 0;
    int o_max = 1;
    int o_min = e;
    for(int i = 0; i < n; ++i){
        std::cin >> tmp;
        if (tmp > o_max)
            o_max = tmp;
        if (tmp < o_min)
            o_min = tmp;
        data.emplace_back(tmp);
    }
    if (o_max != e && o_min == 1){ // Ak pozrie prvú epizódu, už nestihne žiadnu ďalšiu. A navyše aj tak nikdy neuvidí poslednú epizódu.
        std::cout << "-1\n";
        return 0;
    }
    int pocet = 0;
    
    int last = 0;
    bool add = false;
    for(int i = 0; i < data.size(); ++i){
        if (data[i] > last)
        {
            last = data[i];
            pocet++;
            add = true;;
        }
    }
    std::cout << pocet << "\n";
    return 0;
}