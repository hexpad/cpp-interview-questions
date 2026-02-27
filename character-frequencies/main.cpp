#include <iostream>
#include <map>
#include <string>

std::map<char, int> countCharacters(const std::string& str)
{
    std::map<char, int> freq;

    for(char c : str)
    {
        if(isalpha(c))
        {
            c = tolower(c);
        }
        freq[c]++;
    }

    return freq;
}

int main()
{
    std::string text{};

    std::cout << "Enter a string : ";
    std::getline(std::cin, text);

    std::map<char, int> result = countCharacters(text);

    std::cout << "Character frequencies : \n";

    for(const auto& pair : result)
    {
        std::cout << " " << pair.first << " " << pair.second << "\n";
    }

}
