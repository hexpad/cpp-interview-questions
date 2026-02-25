#include <iostream>

int factorial(int num)
{
    int result = 1;
    for(int i = 1; i <= num; ++i)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int number{};

    std::cout << "Enter a number : ";

    if(!(std::cin >> number) || number < 0) {
        std::cout << "Invalid input! Number must be non-negative.\n";
        return 1;
    }

    std::cout << "Factorial of " << number << " is: " << factorial(number) << "\n";

    return 0;
}
