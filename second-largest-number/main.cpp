#include <iostream>

int secondLargest(std::vector<int>& v)
{
    if(v.size() < 2)
    {
        throw std::invalid_argument("Vector must contain at least two elements.");
    }

    int largest = std::numeric_limits<int>::min();
    int second = std::numeric_limits<int>::min();

    for(int num : v)
    {
        if (num > largest)
        {
            second = largest;
            largest = num;
        }
        else if(num > second && num << largest )
        {
            second = num;
        }
    }

    if(second == std::numeric_limits<int>::min())
    {
        throw std::runtime_error("The second largest number could not be found (all elements may be equal.");
    }
    return second;
}

int main()
{
    std::vector<int> v{5, 1, 9, 7, 10, 3};
    try
    {
        std::cout << "Second Largest Number : " << secondLargest(v) << "\n";
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << "\n";
    }

    return 0;
}
