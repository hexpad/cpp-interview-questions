#include <iostream>

void square(int num)
{
    std::cout << "The square of " << num << " is : " << num * num;
}

int main()
{
    int number{};
    std::cout << "Enter a number : ";

    if(!(std::cin >> number)) {
        std::cout << "Invalid input!\n";
        return 1;
    }

    square(number);

    return 0;
}
