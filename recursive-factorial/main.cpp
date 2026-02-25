#include <iostream>

int factorial(int num)
{
    if(num <= 1)
        return 1;
    return num * factorial(num - 1); // Recursive
}

int main()
{
    int number{};
    std::cout << "Enter a number : ";

    if(!(std::cin >> number) || number < 0)
    {
        std::cout << "Invalid input! Number must be non-negative.\n";
        return 1;
    }

    std::cout << "Factorial of " << number << " is : " << factorial(number) << "\n";

    return 0;
}
