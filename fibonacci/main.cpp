#include <iostream>

void fibonacci(int n)
{
    int first = 0;
    int second = 1;

    if(n <= 0)
        return;
    std::cout << first;

    for(int i = 1; i < n; ++i)
    {
        std::cout << " " << second;
        int next = first + second;
        first = second;
        second = next;
    }
    std::cout << "\n";
}

int main()
{
    int N{};
    std::cout << "Enter N : ";

    if(!(std::cin >> N) || N <= 0) {
        std::cout << "Invalid input! N must be positive.\n";
        return 1;
    }

    fibonacci(N);

}
