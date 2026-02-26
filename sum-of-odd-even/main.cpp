#include <iostream>

int main()
{
    int N{};
    int sumEven{};
    int sumOdd{};

    std::cout << "Enter N : ";
    std::cin >> N;

    for(int i=1; i <= N; ++i)
    {
        if(i % 2 == 0)
        {
            sumEven += i;
        }
        else
        {
            sumOdd += i;
        }


    }
    std::cout << "Sum of Odd Numbers from 1 to N : " << sumOdd << "\n";
    std::cout << "Sum of Even Numbers from 1 to N : " <<sumEven << "\n";
}
