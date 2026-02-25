#include <iostream>

int fibonacci(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int N{};
    std::cout << "Enter N : ";

    if( !(std::cin >> N) || N < 0 )
    {
        std::cout << "Invalid input! N must be non-negative.\n";
        return 1;
    }

    for(int i = 0; i < N; ++i)
    {
        std::cout << fibonacci(i) << " ";
    }
    std::cout << "\n";
    return 0;
}
