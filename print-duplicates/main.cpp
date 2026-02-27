#include <iostream>
#include <vector>
#include <unordered_map>

void printDuplicates(const std::vector<int>& vec)
{
    std::unordered_map<int, int> frequency;

    for(int num : vec)
    {
        frequency[num]++;
    }

    bool found = false;

    // Print duplicates
    for(const auto& pair : frequency)
    {
        if(pair.second > 1)
        {
            std::cout << pair.first << " ";
            found = true;
        }
    }

    if(!found)
    {
        std::cout << "No duplicates found.";
    }

    std::cout << "\n";
}

int main()
{
    std::vector<int> numbers{};
    int value;

    std::cout << "Enter numbers (-1 to stop) : \n";

    while(std::cin >> value && value != -1)
    {
        numbers.push_back(value);
    }

    printDuplicates(numbers);
}
