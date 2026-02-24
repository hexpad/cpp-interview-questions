/*
  This program checks whether the given number is prime.
  It tests divisibility from 2 up to the square root of the number.
  If any divisor is found, the number is not prime.
*/

#include <iostream>

void isPrime(int x)
{
    if(x <= 1)
    {
        std::cout << "Not prime\n";
        return;
    }

    for(int i = 2; i * i <= x; i++)
    {
        if(x % i == 0)
        {
            std::cout << "Not prime\n";
            return;
        }
    }
    std::cout << "Prime\n";
}

int main()
{
    int number{};
    std::cout << "Enter a number : ";
    std::cin >> number;

    isPrime(number);
}
