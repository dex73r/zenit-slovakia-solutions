#include <iostream>
#include <string>
// #include <fstream>

int main()
{
    /* 
    std::ifstream fin("input.txt");
    if (!fin)
        return 1;
 */
    std::string start = "kod: ";
    std::string input;
    while (std::getline(std::cin, input))
    {
        size_t pos = 0;
        if ((pos = input.find(start)) != std::string::npos)
        {
            pos += 5; // start + len("kod: ");
            for (int i = pos; i < input.length(); ++i)
            {
                if (input[i] == ' ')
                {
                    // they seem to have some bug on their side telling me I didn't do \n - whatever..
                    std::cout << '\n';
                    return 0;
                }
                std::cout << input[i];
            }
        }
    }

    return 0;
}