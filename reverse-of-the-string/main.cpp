#include <iostream>

std::string reverse(std::string& word)
{
    std::string reverse = "";
    for(int i = word.length() - 1; i >= 0; --i)
    {
        reverse += word[i];
    }
    return reverse;
}

int main()
{
    std::string word{};
    std::cout << "Enter a word : ";
    std::getline(std::cin,word);

    std::cout << reverse(word) << std::endl;

    return 0;
}
