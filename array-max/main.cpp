#include <iostream>

int main()
{
    int arr[5];

    std::cout << "Enter 5 number : \n";
    for(int i = 0; i < 5; ++i)
    {
        std::cout << "number : ";
        std::cin >> arr[i];
    }

    int largestOne = arr[0];

    for(int i = 1; i < 5; ++i)
    {
        if(arr[i] > largestOne)
        {
            largestOne = arr[i];
        }
    }

    std::cout << "Largest Number : " << largestOne << "\n";

    return 0;
}
