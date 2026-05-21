#include <iostream>
#include <vector>

void moveZeroes(std::vector<int>& nums)
{
    std::vector<int> result;

    for(int x : nums)
    {
        if(x != 0)
            result.push_back(x);
    }

    while(result.size() < nums.size())
    {
        result.push_back(0);
    }

    nums = result;
}

int main()
{
    std::vector<int> numbers {0, 1, 0, 3, 12};
    moveZeroes(numbers);

    for(int x : numbers)
    {
        std::cout << x << " ";
    }

    return 0;
}
