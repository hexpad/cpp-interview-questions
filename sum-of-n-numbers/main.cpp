#include <iostream>

int main()
{
    int sum{};
    int N{};

    std::cout << "Enter N : ";

    if(!(std::cin >> N) || N < 1) {
        std::cout << "Invalid input! N must be a positive integer.\n";
        return 1;
    }

    for(int i=1; i<=N; ++i)
    {
        sum += i;
    }
    std::cout << sum;

    return 0;
}
