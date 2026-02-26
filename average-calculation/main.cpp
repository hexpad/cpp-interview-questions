#include <iostream>

double average(const std::vector<int>& numbers)
{
    if(numbers.empty())
    {
        return 0.0;
    }

    int sum = 0;

    for(int num : numbers)
        sum += num;

    return static_cast<double>(sum) / numbers.size();
}

int main()
{
    std::vector<int> numbers{};
    int value{};

    std::cout << "Enter numbers to be averaged (0 to finish) : ";

    while(true)
    {
        std::cin >> value;

        if(value == 0)
            break;

        numbers.push_back(value);
    }

    if(numbers.empty())
    {
        std::cout << "No numbers entered." << "\n";
    }
    else
    {
        double result = average(numbers);
        std::cout << "Average : " << result << "\n";
    }

    return 0;
}
