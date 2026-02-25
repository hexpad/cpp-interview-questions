#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec{};

    for(int i = 5; i >= 1; --i)
    {
        vec.push_back(i);
    }

    std::sort(vec.begin(), vec.end());

    std::cout << "Sorted list : ";
    for(int num : vec)
    {
        std::cout << num << " ";
    }

    return 0;
}
