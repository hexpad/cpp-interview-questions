#include <iostream>

void isPrime(int num)
{
    if(num <= 1)
    {
        std::cout << "Not prime\n";
        return;
    }

    bool prime = true;

    for(int i=2; i < num; ++i)
    {
        if(num % i == 0)
        {
            prime = false;
            break;
        }
    }

    if(prime)
    {
        std::cout << "Prime\n";
    }
    else
    {
        std::cout << "Not prime\n";
    }
}

int main()
{
    int number{};

    std::cout << "Enter a number : \n";
    std::cin >> number;

    isPrime(number);

    return 0;
}
