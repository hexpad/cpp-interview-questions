#include <iostream>

bool isPalindrome(std::string& w)
{
    for(char &c : w)
    {
        c = std::tolower(c);
    }

    std::string copy = w;
    std::reverse(copy.begin(), copy.end());

    return w == copy;
}

int main()
{
    std::string word{};
    std::cout << "Enter a word : ";
    std::getline(std::cin,word);

    if(isPalindrome(word))
        std::cout << "Palindrome";
    else
        std::cout << "Not Palindrome";

    return 0;
}
